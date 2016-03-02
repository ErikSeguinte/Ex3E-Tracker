#include <string>
#include "Character.h"

Character::Character(std::string name)
{
    this->name = name;
    shift_target_ptr = nullptr;
    initiative = 0;
    is_crashed = false;
    has_gone = false;
    onslaught = 0;
    is_delayed = false;
}
