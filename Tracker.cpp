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

    return characterList.size();
    return -1;
}

void Tracker::performWitheringAttack(attack_data input)
{
   //input.attacker.ptr->take_i 
}
