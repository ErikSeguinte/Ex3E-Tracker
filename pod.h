#ifndef POD_H_
#define POD_H_
#include<memory>

class Character;

struct IndividualAttackStats {
  std::weak_ptr<Character> ptr;
  int initiativeModifier;
  IndividualAttackStats(std::shared_ptr<Character> , int);
  explicit IndividualAttackStats(std::shared_ptr<Character>);
  IndividualAttackStats(std::weak_ptr<Character>, int);
  explicit IndividualAttackStats(std::weak_ptr<Character>);
};

struct attack_data {
  IndividualAttackStats attacker;
  IndividualAttackStats defender;
  int damage;
  bool success;
  int cost;

  attack_data(IndividualAttackStats, IndividualAttackStats);
  
  void SetCombatants(std::weak_ptr<Character>, std::weak_ptr<Character>);
};

#endif  // POD_H_
