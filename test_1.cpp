#include "catch.hpp"
#include "Tracker.h"
#include "Tracker.h"
#include "Character.h"

SCENARIO("Characters can be added and destroyed", "[add_character]") {
    GIVEN( "A tracker exists" )
    {
	Tracker tracker;
    
    
	WHEN( "Characters are added")
	{
	    int characters_to_add = 10;
	    for (int i = 0; i < characters_to_add; i++)
	    {
		tracker.AddCharacter(std::to_string(i));
	    }
	
    
	    THEN( "The Vector's Size should increase.")
	    {
		REQUIRE( tracker.size()== characters_to_add);
	    }

	    AND_THEN( "The Object count should also increase")
	    {
		REQUIRE(Character::objectCount == characters_to_add);
	    }
	}
        
    }
    GIVEN("Characters exist that have initiative")
    {
        Tracker tracker;
        int characters_to_add = 10;
        for (int i = 0; i < characters_to_add; i++)
        {
            tracker.AddCharacter(std::to_string(i));
            tracker.character_list()[i]->setInit(i);
        }  

        WHEN("They are sorted")
        {
            tracker.sort();
                THEN("Characters should be sorted from Highest to lowest")
                {
                    //test stuff
                    REQUIRE(tracker.character_list()[0]->initiative() == characters_to_add - 1);
                }
        }
        AND_WHEN("A character has taken their turn, ")
        {
            tracker.sort();
            tracker.character_list()[0]->setHasGone(true) ;
            tracker.sort();
            THEN("They should drop to the bottom")
                REQUIRE(tracker.character_list()[0]->initiative() == characters_to_add - 2);
        }
    }
}

SCENARIO("A tracker exists.") {
    Tracker tracker;
    tracker.AddCharacter("A");
    tracker.AddCharacter("B");
    tracker.AddCharacter("C");
    std::shared_ptr<Character> &C (tracker.character_list()[2]);
    tracker.character_list()[0]->setInit(10);
    tracker.character_list()[1]->setInit(10);
    tracker.character_list()[2]->setInit(10);
    tracker.print();

    GIVEN("A, B, and C exists") {
        IndividualAttackStats attacker(tracker.character_list()[0], 0);
        IndividualAttackStats defender(tracker.character_list()[2], 0);

        attack_data data(attacker, defender);
        data.damage = 5;
        data.success = true;
        data.cost = 0;

        WHEN("A attacks C for 5 damage") {
            tracker.performWitheringAttack(data);
            
            THEN("A should have 11 initiative, and C should have 5"){
                REQUIRE(tracker.character_list()[0]->initiative()==11);
            }
        }
    }
}


