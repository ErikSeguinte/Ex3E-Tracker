#include "catch.hpp"
#include "Tracker.h"
#include "Tracker.h"
#include "Character.h"

SCENARIO("Characters can be added and destroyed", "[add_character]") {
  GIVEN("A tracker exists") {
    Tracker tracker;
    WHEN("Characters are added") {
      int characters_to_add = 10;
      for (int i = 0; i < characters_to_add; i++) {
        tracker.AddCharacter(std::to_string(i));
      }
      THEN("The Vector's Size should increase.") {
        REQUIRE(tracker.size()== characters_to_add);
      }
      AND_THEN("The Object count should also increase") {
        REQUIRE(Character::objectCount == characters_to_add);
      }
    }
  }
  GIVEN("Characters exist that have initiative") {
    Tracker tracker;
    int characters_to_add = 10;
    for (int i = 0; i < characters_to_add; i++) {
      tracker.AddCharacter(std::to_string(i));
      tracker.character_list()[i]->setInit(i);
    }

    WHEN("They are sorted") {
      tracker.sort();
      THEN("Characters should be sorted from Highest to lowest") {
        // test stuff
        REQUIRE(
            tracker.character_list()[0]->initiative() ==
            characters_to_add - 1);
      }
    }
    AND_WHEN("A character has taken their turn, ") {
      tracker.sort();
      tracker.character_list()[0]->setHasGone(true);
      tracker.sort();
      THEN("They should drop to the bottom")
        REQUIRE(tracker.character_list()[0]->initiative()
            == characters_to_add - 2);
    }
  }
}
SCENARIO("A tracker exists.") {
  Tracker tracker;
  tracker.AddCharacter("A");
  tracker.AddCharacter("B");
  tracker.AddCharacter("C");
  std::weak_ptr<Character> A (tracker.character_list()[0]);
  std::weak_ptr<Character> B (tracker.character_list()[1]);
  std::weak_ptr<Character> C (tracker.character_list()[2]);
  A.lock()->setInit(10);
  B.lock()->setInit(10);
  C.lock()->setInit(10);
  GIVEN("A, B, and C exists") {
    IndividualAttackStats attacker(A);
    IndividualAttackStats defender(C);
    attack_data data(attacker, defender);
    data.damage = 5;
    data.success = true;
    data.cost = 0;
    WHEN("A attacks C for 5 damage") {
      tracker.performWitheringAttack(data);
      tracker.sort();
      THEN("A should have 16 initiative, and C should have 5") {
        REQUIRE(A.lock()->initiative() == 16);
      }
      THEN("Initiative Order should be B, C, then A") {
        REQUIRE(tracker.character_list()[0]->name() == "B");
      }
      AND_WHEN("B and C Attack,") {
        data.attacker.ptr = B;
        data.defender.ptr = A;
        tracker.performWitheringAttack(data);
        tracker.sort();
        CHECK(tracker.character_list()[0]->name() == "C");
        data.attacker.ptr = C.lock();
        data.defender.ptr = A.lock();
        tracker.performWitheringAttack(data);
        tracker.print();
        THEN("Turns should refresh") {
          bool turns_refreshed = (A.lock()->has_gone() == false
              && B.lock()->has_gone() == false
              && C.lock()->has_gone() == false);
          REQUIRE(turns_refreshed);
        }
        AND_WHEN("B Crashes A") {
          data.attacker.ptr = B;
          data.defender.ptr = A;
          data.damage = 6;
          tracker.performWitheringAttack(data);
          CHECK(A.lock()->initiative() == 0);
          THEN("B Should get a crash bonus.") {
            tracker.print();
            REQUIRE(B.lock()->initiative() == 28);
          }
        }
      }
    }
  }
}


