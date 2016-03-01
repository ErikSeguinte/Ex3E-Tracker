#include <string>
#include "Tracker.h"
#include "Character.h"
#include <vector>
Tracker::Tracker()
{
    std::vector<Character> *character_list;
    character_list = new std::vector<Character>;
}

void Tracker::add_character(std::string name)
{
    Character new_character(name);
    character_list.push_back(  new_character);
}

void Tracker::print()
{
    std::vector<Character>::iterator iter;

    for (iter = character_list.begin(); iter < character_list.end(); iter++)
    {
	std::cout << iter->get_name() << "\n";
    }
}
