#include <string>
#include "Character.h"

int Character::objectCount;
Character::Character() : Character(("Character #" + std::to_string(objectCount))) {}

Character::Character(std::string name)
{
    this->name = name;
    initiative = 0;
    turnsSinceCrashed = 0;
    isCrashed = false;
    hasGone = false;
    onslaught = 0;
    isDelayed = false;
    shiftTarget = std::weak_ptr<Character>(); 
    characterNo= objectCount;
    objectCount++;
}


bool Character::checkForCrash( int damage)
{
    bool isCrashedByAttack = (initiative > 0 && (initiative - damage) <= 0);
    if (isCrashedByAttack && turnsSinceCrashed <= 0)
    {
	return true;
    }
    return false;
}

void Character::addOnslaught(int value)
{
    onslaught++;
}

std::string Character::getName()
{
    return name;
}

Character::~Character(){objectCount--;}

int Character::takeInitDamage( int value )
{
    int initGained = 0;
    if (checkForCrash(value))
	initGained += 5;
    
    initiative -= value;
    initGained += value;
    return initGained;
}

void Character::gainInitFromDamage(int value)
{

}
