#include <string>
#include "Character.h"

int Character::object_count;
Character::Character() : Character(("Character #" + std::to_string(object_count))) {}

Character::Character(std::string name)
{
    this->name = name;
    initiative = 0;
    recently_crashed = 0;
    is_crashed = false;
    has_gone = false;
    onslaught = 0;
    is_delayed = false;
    shift_target = -1;
    character_number = object_count;
    object_count++;
}


bool Character::check_for_crash( int damage)
{
    if (initiative > 0 && (initiative - damage) <= 0 && recently_crashed == 0)
    {
	return true;
    }
    return false;
}

void Character::add_onslaught(int value)
{
    onslaught++;
}

std::string Character::get_name()
{
    return name;
}

Character::~Character(){object_count--;}
