#include <string>
#include "Tracker.h"
#include "Character.h"
#include <vector>
#include <memory>
#include <iostream>
#include <iomanip>
#include <algorithm>

IndividualAttackStats::IndividualAttackStats(std::shared_ptr<Character> &actor) :
    ptr(actor),
    initiativeModifier() {};

IndividualAttackStats::IndividualAttackStats(std::shared_ptr<Character> &actor, int modifier):
    ptr(actor),
    initiativeModifier(modifier){};


std::string Tracker::centered( std::string const& original, int targetSize ) {
    std::string word = original;
    if (static_cast<int>( original.size() ) % 2 == 1)
        word = original + " ";
    int padding = targetSize - static_cast<int>( original.size() );
    return padding > 0
        ? std::string( padding / 2, ' ' ) 
            + word
            + std::string((padding / 2), ' ' )
            : original;
}


Tracker::Tracker() {
  std::vector<std::shared_ptr<Character>> character_list_;
}

void Tracker::AddCharacter(std::string name) {
  character_list_.emplace_back(new Character(name));
}

void Tracker::print() {
    std::cout << "---------------------------------\n";
    std::cout << centered("Name",10) << "|" <<  centered("init",10) << "|" << centered("Has Gone",10) << "|\n"; 
    std::cout << "=================================\n";
    std::vector<std::shared_ptr<Character>>::iterator iter;

    for (iter = character_list_.begin(); iter < character_list_.end(); iter++) {
  	std::cout << centered((*iter)->name(),10) << '|' << centered((*iter)->initiative_as_string(),10) << '|' << centered((*iter)->has_gone_as_string(),10) << '|' << '\n';
    }
    std::cout << "=================================\n";
}
int Tracker::size() const  {
  int size = character_list_.size();
  return size;
}

void Tracker::performWitheringAttack(const attack_data& input)
{
  int initGained = input.defender.ptr->takeInitDamage(input.damage); 
  input.attacker.ptr->gainInitFromDamage(initGained);
  input.defender.ptr->setCrashed(input.defender.ptr->initiative() <= 0);

}

void Tracker::sort() {
  std::stable_sort(character_list_.begin(), character_list_.end(), comparator);
  std::stable_sort(character_list_.begin(), character_list_.end(), comparatorTurn);
}

bool Tracker::comparator(const std::shared_ptr<Character>& left, const std::shared_ptr<Character>& right) {
    return Character::compareCharacter(*left, *right);
}

bool Tracker::comparatorTurn(const std::shared_ptr<Character>& left, const std::shared_ptr<Character>& right) {
    return !(left->has_gone());
}
