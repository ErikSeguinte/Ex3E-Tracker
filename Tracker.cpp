#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include "Tracker.h"
#include "Character.h"
#include "./pod.h"

std::string Tracker::centered(std::string const& original, int targetSize) {
  std::string word = original;
  if (static_cast<int>( original.size() ) % 2 == 1)
    word = original + " ";
  int padding = targetSize - static_cast<int>(original.size());
  return padding > 0
    ? std::string(padding / 2, ' ')
      + word
      + std::string((padding / 2), ' ' )
      : original;
}


Tracker::Tracker() {
  std::vector<std::shared_ptr<Character>> character_list_;
}

void Tracker::AddCharacter(std::string name) {
  character_list_.emplace_back(std::make_shared<Character>(name));
}

const void Tracker::print() {
  sort();
  std::cout << "\n--------------------------------------------\n";
  std::cout << centered("Name" , 10) << "|" <<  centered("init" , 10) << "|" 
    << centered("Crashed", 10) << '|' << centered("Has Gone" , 10) << "|\n";
  std::cout << "============================================\n";
  std::vector<std::shared_ptr<Character>>::iterator iter;

  for (auto iter : character_list_) {
    std::cout << centered(iter->name() , 10) << '|' <<
      centered(iter->initiative_as_string() , 10) << '|' <<
      centered(iter->is_crashed_as_string(), 10) << '|' <<
      centered(iter->has_gone_as_string() , 10) << '|' << '\n';
  }
  std::cout << "============================================\n";
}
int Tracker::size() const  {
  int size = character_list_.size();
  return size;
}

void Tracker::performWitheringAttack(const attack_data& input) {
  int initGained = input.defender.ptr.lock()->takeInitDamage(input);
  input.attacker.ptr.lock()->gainInitFromDamage(initGained + 1);
  input.attacker.ptr.lock()->setHasGone(true);
  input.attacker.ptr.lock()->crash_state()->DetermineCrash();
  input.defender.ptr.lock()->crash_state()->DetermineCrash(input.attacker.ptr);
  if (CheckForEndOfRound()) {
    PerformEndOfRound();
  }
  sort();
}

void Tracker::sort() {
  std::stable_sort(character_list_.begin(), character_list_.end(), comparator);
  std::stable_sort(character_list_.begin(), character_list_.end(),
      comparatorTurn);
}

bool Tracker::comparator(const std::shared_ptr<Character>& left,
    const std::shared_ptr<Character>& right) {
  // return Character::compareCharacter(*left, *right);
  return left->initiative() > right->initiative();
}

bool Tracker::comparatorTurn(const std::shared_ptr<Character>& left,
    const std::shared_ptr<Character>& right) {
  return left->has_gone() < right->has_gone();
}

bool Tracker::CheckForEndOfRound() {
  for (auto character : character_list_) {
    if (!(character->has_gone())) {
      return false;
    }
  }
  return true;
}

void Tracker::PerformEndOfRound() {
  for (auto character : character_list_) {
    character->setHasGone(false);
    character->crash_state()->increment_rounds_since_crash_recovery();
    sort();
  }
}

