#include "catch.hpp"
#include "Tracker.h"
#include "Character.h"
#include "./pod.h"

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
  IndividualAttackStats attacker(A);
  IndividualAttackStats defender(C);
  attack_data data(attacker, defender);
  GIVEN("A, B, and C exists") {
    data.SetCombatants(A, C);
    data.damage = 5;
    data.success = true;
    data.cost = 0;
    WHEN("A attacks C for 5 damage") {
      tracker.performWitheringAttack(data);
      THEN("A should have 16 initiative, and C should have 5") {
        REQUIRE(A.lock()->initiative() == 16);
      }
      THEN("Initiative Order should be B, C, then A") {
        REQUIRE(tracker.character_list()[0]->name() == "B");
      }
      AND_WHEN("B and C Attack,") {
        data.SetCombatants(B, A);
        tracker.performWitheringAttack(data);
        CHECK(tracker.character_list()[0]->name() == "C"); // NOLINT
        data.SetCombatants(C, A);
        tracker.performWitheringAttack(data);
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
          CHECK(A.lock()->initiative() == 0); // NOLINT
          THEN("B Should get a crash bonus.") {
            REQUIRE(B.lock()->initiative() == 28);
          }
          THEN("B should be A's shift target") {
            std::weak_ptr<Character> shift_target =
              A.lock()->crash_state()->shift_target();
            CHECK(shift_target.lock()); // NOLINT
            if (shift_target.lock()) {
              REQUIRE(shift_target.lock() == B.lock());
            }
          }
          AND_WHEN("C attacks A") {
            data.attacker.ptr = C;
            data.damage = 1;
            CHECK(tracker.character_list()[0]->name() == "C"); // NOLINT
            tracker.performWitheringAttack(data);

            THEN("C should NOT get a crash bonus") {
              REQUIRE(C.lock()->initiative() == 13);
            }
          }
        }
      }
    }
  }

  GIVEN("A crashes C") {
    data.damage = 10;

    tracker.performWitheringAttack(data);
    CHECK(C.lock()->is_crashed() == true);

    WHEN("C rises above 0 Initiative") {
      data.SetCombatants(B,C);
      data.damage = 1;
      tracker.performWitheringAttack(data);
      data.SetCombatants(C, A);
      data.damage = 11;
      tracker.performWitheringAttack(data);
      THEN("C should no longer be crashed") {
        REQUIRE(C.lock()->is_crashed() == false);
      }
      
      AND_WHEN("C is crashed again...") {
        data.SetCombatants(A, C);
        tracker.performWitheringAttack(data);
        CHECK(C.lock()->is_crashed());
        THEN("A should not recieve a crash Bonus") {
          REQUIRE(A.lock()->initiative() == (15 + 11 + 1));
        }
      }

      AND_WHEN("C is crashed after surving 2 end-of-rounds") {
        tracker.print();

        data.damage = 1;
        data.SetCombatants(A, B);
        tracker.performWitheringAttack(data);
        data.SetCombatants(B, C);
        tracker.performWitheringAttack(data);
        data.SetCombatants(C, A);
        tracker.performWitheringAttack(data);
        REQUIRE(C.lock()->is_crashed() == false);
        THEN("A should recieve a crash bonus") {
          tracker.print();
          data.damage = 12;
          data.SetCombatants(A, C);
          tracker.performWitheringAttack(data);
          REQUIRE(A.lock()->initiative() == (16 + 12 + 5 + 1));
        }
      }

    }


//  WHEN("C takes 3 turns") {
//    data.SetCombatants(B, C);
//    data.damage = 0;
//    tracker.performWitheringAttack(data);
//    data.SetCombatants(C, A);
//    tracker.performWitheringAttack(data);
//    bool new_round = (A.lock()->has_gone() == false && B.lock()->has_gone() == false && C.lock()->has_gone() == false);
//    CHECK(new_round);
//    CHECK(C.lock()->is_crashed());

//    //  Round 2
//    data.SetCombatants(A,B);
//    tracker.performWitheringAttack(data);
//    data.SetCombatants(B, C);
//    tracker.performWitheringAttack(data);
//    data.SetCombatants(C, A);
//    tracker.performWitheringAttack(data);
//    new_round = (A.lock()->has_gone() == false && B.lock()->has_gone() == false && C.lock()->has_gone() == false);
//    CHECK(new_round);
//    CHECK(C.lock()->is_crashed());

//    //  Round 3
//    data.SetCombatants(A,B);
//    tracker.performWitheringAttack(data);
//    data.SetCombatants(B, C);
//    tracker.performWitheringAttack(data);
//    data.SetCombatants(C, A);
//    tracker.performWitheringAttack(data);
//    new_round = (A.lock()->has_gone() == false && B.lock()->has_gone() == false && C.lock()->has_gone() == false);
//    CHECK(new_round);
//    CHECK(C.lock()->is_crashed());

//    //  Round 4
//    data.SetCombatants(A,B);
//    tracker.performWitheringAttack(data);
//    data.SetCombatants(B, C);
//    tracker.performWitheringAttack(data);
//    data.SetCombatants(C, A);
//    tracker.performWitheringAttack(data);
//    new_round = (A.lock()->has_gone() == false && B.lock()->has_gone() == false && C.lock()->has_gone() == false);
//    CHECK(new_round);
//    tracker.print();

//    THEN("C should no longer be crashed at the start of his turn.") {
//      REQUIRE(C.lock()->is_crashed() == false);
//    }

//  }
  }


}
