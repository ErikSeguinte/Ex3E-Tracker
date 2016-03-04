#include <string>
#include "Character.h"

Character::Character(std::string name)
{
    this->name = name;
    shift_target_ptr = nullptr;
    initiative = 0;
    recently_crashed = 0;
    is_crashed = false;
    has_gone = false;
    onslaught = 0;
    is_delayed = false;
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
