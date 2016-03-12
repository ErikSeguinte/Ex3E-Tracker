#include <string>
#include "Character.h"

int Character::objectCount;
Character::Character() : Character(("Character #" + std::to_string(objectCount))) {}

Character::Character(std::string name) {
    this->name_ = name;
    initiative_ = 0;
    turns_since_crashed_ = 0;
    is_crashed_ = false;
    has_gone_= false;
    onslaught_ = 0;
    is_delayed_ = false;
    shift_target_ = std::weak_ptr<Character>(); 
    character_number_ = objectCount;
    objectCount++;
}


bool Character::checkForCrash( int damage) {
    bool isCrashedByAttack = (initiative_ > 0 && (initiative_ - damage) <= 0);
    if (isCrashedByAttack && turns_since_crashed_ <= 0)
    {
	return true;
    }
    return false;
}

void Character::addOnslaught(int value) {
    onslaught_++;
}

Character::~Character(){objectCount--;}

int Character::takeInitDamage( int value ) {
    int initGained = 0;
    if (checkForCrash(value))
	initGained += 5;
    
    initiative_ -= value;
    initGained += value;
    return initGained;
}

void Character::gainInitFromDamage(int value) {

}

bool Character::compareCharacter(const Character& a, const Character& b) {
    return (a.initiative_ < b.initiative_);
}

