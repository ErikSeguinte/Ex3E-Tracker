#include <string>
#include "Tracker.h"
#include "Character.h"
#include <vector>
#include <memory>
Tracker::Tracker()
{
//   std::vector<Character> character_list;
  std::vector<std::shared_ptr<Character>> characterList;
}

void Tracker::addCharacter(std::string name)
{
  characterList.emplace_back(new Character(name));
}

void Tracker::print()
{
//    std::vector<Character>::iterator iter;
//
//      for (iter = character_list.begin(); iter < character_list.end(); iter++)
//    {
//  	std::cout << iter->get_name() << "\n";
//    }
}
int Tracker::getSize()
{
  int size = characterList.size();
  return size;
}

void Tracker::performWitheringAttack(const attack_data& input)
{
  int initGained = input.defender.ptr->takeInitDamage(input.damage); 
  input.attacker.ptr->gainInitFromDamage(initGained);
  input.defender.ptr->setCrashed(input.defender.ptr->getInit <= 0)

}
