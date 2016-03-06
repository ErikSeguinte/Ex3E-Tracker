#include <string>
#include "Tracker.h"
#include "Character.h"
#include <vector>
#include <memory>
Tracker::Tracker()
{
//   std::vector<Character> character_list;
    std::vector<std::unique_ptr<Character>> character_list;
}

void Tracker::add_character(std::string name)
{
    character_list.emplace_back(new Character(name));
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
int Tracker::get_size()
{
   return  character_list.size();
}
