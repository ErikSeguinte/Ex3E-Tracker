#include "./pod.h"

attack_data::attack_data(IndividualAttackStats actor1,
    IndividualAttackStats actor2) :
    attacker(actor1),
    defender(actor2) {}

IndividualAttackStats::IndividualAttackStats(std::shared_ptr<Character> actor) :
  ptr(std::weak_ptr<Character>(actor)),
  initiativeModifier() {}

IndividualAttackStats::IndividualAttackStats(std::shared_ptr<Character> actor,
    int modifier):
  ptr(std::weak_ptr<Character>(actor)),
  initiativeModifier(modifier) {}

IndividualAttackStats::IndividualAttackStats(std::weak_ptr<Character> actor,
    int modifier):
  ptr(actor),
  initiativeModifier(modifier) {}

IndividualAttackStats::IndividualAttackStats(std::weak_ptr<Character> actor):
  ptr(actor),
  initiativeModifier(0) {}

void attack_data::SetCombatants(
    std::weak_ptr<Character> a, std::weak_ptr<Character> d) {
  attacker.ptr = a;
  defender.ptr = d;
}
