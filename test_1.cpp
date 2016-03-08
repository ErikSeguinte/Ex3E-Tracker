#include "catch.hpp"
#include "Tracker.h"
#include "Tracker.h"

SCENARIO("Characters can be added and destroyed", "[add_character]")
{
    GIVEN( "A tracker exists" )
    {
	Tracker tracker;
    
    
	WHEN( "Characters are added")
	{
	    int characters_to_add = 10;
	    for (int i = 0; i < characters_to_add; i++)
	    {
		tracker.addCharacter(std::to_string(i));
	    }
	
    
	    THEN( "The Vector's Size should increase.")
	    {
		REQUIRE( tracker.getSize()== characters_to_add);
	    }

	    AND_THEN( "The Object count should also increase")
	    {
		REQUIRE(Character::objectCount == characters_to_add);
	    }
	}
    }
}

