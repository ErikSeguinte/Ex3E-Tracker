#include <string>
#include "Character.h"
#include <iostream>

CrashState::CrashState(int &init) : initiative_(init) {
  is_crashed_ = false;
  turns_since_crashed_ = 0;
  shift_target_ = std::weak_ptr<Character>();
}


bool CrashState::bonus() const {
  std::cout << "Checking for Crash. Current Initiative = " << initiative_ <<
    '\n';
  return true;
}

void CrashState::StartCrash() {
}

int Character::objectCount;
Character::Character() : Character(("Character #" +
      std::to_string(objectCount))) {}

Character::Character(std::string name): initiative_(0), crash(initiative_) {
  this->name_ = name;
  has_gone_ = false;
  onslaught_ = 0;
  is_delayed_ = false;
  character_number_ = objectCount;
  objectCount++;
}


bool Character::checkForCrash(int damage) {
  bool isCrashedByAttack = (initiative_ > 0 && (initiative_ - damage) <= 0);
  if (isCrashedByAttack) {
    crash.StartCrash();
    return true;
  }
  return false;
}

void Character::addOnslaught(int value) {
  onslaught_++;
}

Character::~Character() {
  objectCount--;
}

int Character::takeInitDamage(int value) {
  int initGained = 0;
  if (checkForCrash(value) && crash.bonus())
    initGained += 5;
  initiative_ -= value;
  initGained += value;

  return initGained;
}

void Character::gainInitFromDamage(int value) {
  initiative_ += value;
}

bool Character::compareCharacter(const Character& a, const Character& b) {
  return (a.initiative_ < b.initiative_);
}

