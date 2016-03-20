#ifndef TRACKER_H_
#define TRACKER_H_
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>
#include "Character.h"
#include<memory>

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

  attack_data(IndividualAttackStats actor1, IndividualAttackStats actor2) :
    attacker(actor1),
    defender(actor2){}
};

class Tracker {
 private:
  std::vector<std::shared_ptr<Character>> character_list_;

 public:
  Tracker();
  static bool comparator(const std::shared_ptr<Character>& left,
                         const std::shared_ptr<Character>& right);
  static bool comparatorTurn(const std::shared_ptr<Character>& left,
                             const std::shared_ptr<Character>& right);
  void AddCharacter(std::string);
  const void print();
  int size() const;
  auto character_list() const {
      return character_list_;
     }

  // Attacks
  void performWitheringAttack(const attack_data& input);
  void sort();
  bool CheckForEndOfRound();
  std::string centered(std::string const& original, int targetSize);

  void PerformEndOfRound();
};

#endif  // TRACKER_H_
