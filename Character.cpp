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


bool Character::checkForCrash(const attack_data &data) {
  bool isCrashedByAttack = (initiative_ > 0 && (initiative_ - data.damage) <= 0);
  if (isCrashedByAttack) {
    crash.StartCrash(data.attacker.ptr);
    return true;
  }
  return false;
}

void CrashState::StartCrash(std::weak_ptr<Character> attacker) {
  shift_target_ = attacker;
  is_crashed_ = true;
  turns_since_crashed_ = 3;
}


CrashState * const Character::crash_state() {
  CrashState * ptr;
  ptr = &crash;
  return ptr;
}

void Character::addOnslaught(int value) {
  onslaught_++;
}

Character::~Character() {
  objectCount--;
}

int Character::takeInitDamage(const attack_data &data) {
  int initGained = 0;
  if (checkForCrash(data) && crash.bonus())
    initGained += 5;
  initiative_ -= data.damage;
  initGained += data.damage;

  return initGained;
}

void Character::gainInitFromDamage(int value) {
  initiative_ += value;
}

bool Character::compareCharacter(const Character& a, const Character& b) {
  return (a.initiative_ < b.initiative_);
}

std::weak_ptr<Character> CrashState::shift_target() {
  return shift_target_;
}
