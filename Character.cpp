#include <string>
#include "Character.h"
#include <iostream>

CrashState::CrashState(int &init) : initiative_(init) {
  is_crashed_ = false;
  rounds_since_crash_recovery_ = 2;
  shift_target_ = std::weak_ptr<Character>();
}


bool CrashState::bonus() const {
  if (rounds_since_crash_recovery_ >=2 ) { 
    return true;
  }
  else {
    return false;
  }
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
  bool isCrashedByAttack =
    (initiative_ > 0 && (initiative_ - data.damage) <= 0);
  if (isCrashedByAttack) {
    return true;
  }
  return false;
}

void CrashState::StartCrash(std::weak_ptr<Character> attacker) {
  shift_target_ = attacker;
  is_crashed_ = true;
  turns_remaining_in_crash_ = 3;
  rounds_since_crash_recovery_ = 0;
}

void CrashState::CrashCountdown() {
  if (rounds_since_crash_recovery_ < 2)
    rounds_since_crash_recovery_++;
  if (turns_remaining_in_crash_ > 0)
    turns_remaining_in_crash_--;
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
  if (checkForCrash(data)){
    if (crash.bonus()){
      initGained += 5;
    }
  }
  initiative_ -= data.damage;
  initGained += data.damage;

  return initGained;
}

void Character::gainInitFromDamage(int value) {
  initiative_ += value;
  if (initiative_ >= 0) {
  }
}

bool Character::compareCharacter(const Character& a, const Character& b) {
  return (a.initiative_ < b.initiative_);
}

std::weak_ptr<Character> CrashState::shift_target() {
  return shift_target_;
}

//  End Crash if attacker's Initiative rises above 0.
void CrashState::DetermineCrash() {
  if (initiative_ > 0 && is_crashed_) {
    EndCrash();
  }
}

//  If Defender's initiative is below 0, either start crash state if not already.
void CrashState::DetermineCrash(std::weak_ptr<Character> attacker){
  if (initiative_ <= 0) {
    StartCrash(attacker); //  start defender's crash, make attacker the shift target.
  }
}

void CrashState::increment_rounds_since_crash_recovery() {
  //  Cannot gain Initiative Break Bonus if target has recovered from crash
  //  this round or the round before.
  if (rounds_since_crash_recovery_ < 2)
    rounds_since_crash_recovery_++;
}

void CrashState::EndCrash() {
  rounds_since_crash_recovery_ = 0;
  is_crashed_ = false;
  turns_remaining_in_crash_ = 0;
  shift_target_ = std::weak_ptr<Character>();
}
