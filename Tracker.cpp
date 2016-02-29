#include <string>
#include "Tracker.h"
#include "Character.h"
#include <vector>
#include "Character.cpp"
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


