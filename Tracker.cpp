#include <string>
#include "Tracker.h"
#include "Character.h"
#include <vector>
#include <memory>
#include <iostream>
#include <iomanip>

std::string Tracker::centered( std::string const& original, int targetSize )
{
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
    std::cout << centered("Name",10) << "|" <<  centered("init",10) << "|" << centered("Has Gone",10) << '\n'; 
    std::vector<std::shared_ptr<Character>>::iterator iter;

    for (iter = characterList.begin(); iter < characterList.end(); iter++)
    {
  	std::cout << centered((*iter)->getName(),10) << '|' << centered((*iter)->getInitAsString(),10) << '|' << centered((*iter)->getHasGoneAsString(),10) << '|' << '\n';
    }
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
  input.defender.ptr->setCrashed(input.defender.ptr->getInit() <= 0);

}

