#include <iostream>
#include "catch.hpp"
#include "circleDeck.h"

TEST_CASE("Deck is alive", "[deck]"){

    myDeck a;
    myDeck b(5);

    SECTION("Deck is succesfully created"){
        REQUIRE( a.size == 10 );
        REQUIRE( a.length() == 0 );
        REQUIRE( b.size == 5);
        REQUIRE( b.length() == 0);
    }
    

}