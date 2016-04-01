//  Specification file for the Character Class
#ifndef CHARACTER_H_
#define CHARACTER_H_
#include <string>
#include <memory>
#include "./pod.h"

class Character;
struct attack_data;

class CrashState {
 private:
  int &initiative_;
  bool is_crashed_;
  int rounds_since_crash_recovery_;
  int turns_remaining_in_crash_;
  std::weak_ptr<Character> shift_target_;

 public:
  explicit CrashState(int &);
  bool state() const {
    return is_crashed_;
  }
  bool bonus() const;
  void StartCrash(std::weak_ptr<Character> attacker);
  void increment_rounds_since_crash_recovery();
  void EndCrash();
  std::weak_ptr<Character> shift_target();
  void CrashCountdown();
  void DetermineCrash();
  void DetermineCrash(std::weak_ptr<Character>);
};

struct CharacterData {
  std::string name;
  int initiative;
  bool has_gone;
  int onslaught;
  bool is_delayed;
};

class Character {
 private:
  std::string name_;
  int initiative_;
  bool is_crashed_;;
  int turns_since_crashed_;
  bool has_gone_;
  std::weak_ptr<Character> shift_target_;
  int onslaught_;
  bool is_delayed_;
  int character_number_;
  CrashState crash;

 public:
  static int objectCount;
  // Constructors
  Character();
  explicit Character(std::string);
  // Getters
  std::string name() const {
    return name_;
  }
  int initiative() const {
    return initiative_;
  }
  std::string initiative_as_string() const {
    return std::to_string(initiative_);
  }
  bool is_crashed() const {
    return crash.state();
  }
  std::string is_crashed_as_string() const {
    return crash.state() ? "true" : "false";
  }
  bool has_gone() const {
    return has_gone_;
  }
  std::string has_gone_as_string() const {
    return has_gone_ ? "true" : "false";
  }
  Character shift_target() const;
  int onslaught() const;
  bool is_delayed() const;;
  CharacterData character_data() const;
  ~Character();
  CrashState * const crash_state();
  // Setters
  void setName(std::string);
  void setInit(int value) {
    initiative_ = value;
  }
  void setCrashed(bool crashed) {
    is_crashed_ = crashed;
  }
  void setRecentlyCrashed();
  void setHasGone(bool boolean) {
      has_gone_ = boolean;
  }
  void setShiftTarget_ptr(const std::shared_ptr<Character>& target);
  void setOnslaught(int value);
  void setIsDelayed(bool value);

  // Other
  virtual bool checkForCrash(const attack_data &data);
  virtual void addOnslaught(int value);
  virtual int takeInitDamage(const attack_data &data);
  virtual void gainInitFromDamage(int value);
//      virtual bool checkForShift(std::shared_ptr<Character> attacker);

  static bool compareCharacter(const Character&, const Character&);
};
#endif  // CHARACTER_H_
