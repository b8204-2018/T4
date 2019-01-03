#include <iostream>
#include <cstring>
#include "catch.hpp"
#include "circleDeck.h"

TEST_CASE("Deck is alive", "[deck]") {

    SECTION("Deck is succesfully created") {
        myDeck a; //default constructor
        REQUIRE(a.size == 10);
        REQUIRE(a.length() == 0);
        REQUIRE(a.empty());
        myDeck b(5); //custom constructor
        REQUIRE(b.size == 5);
        REQUIRE(b.length() == 0);
        REQUIRE(a.empty());
    }

}

TEST_CASE("Pushing and popping elements from front", "[deck]") {

    SECTION("One element") {
        myDeck a;
        a.push_front(1);
        CHECK(a.size == 10);
        CHECK(!a.empty());
        CHECK(a.length() == 1);
        CHECK(a.pop_front() == 1);
        CHECK(a.size == 10);
        CHECK(a.empty());
        CHECK(a.length() == 0);
    }

    SECTION("Some elements") {
        myDeck a;
        a.push_front(1);
        a.push_front(2);
        a.push_front(3);
        CHECK(!a.empty());
        CHECK(a.length() == 3);
        CHECK(a.pop_front() == 3);
        CHECK(a.length() == 2);
        CHECK(a.pop_front() == 2);
        CHECK(a.length() == 1);
        CHECK(a.pop_front() == 1);
        CHECK(a.empty());
    }

    SECTION("Circle") {
        myDeck a(5);
        a.push_front(1);
        a.push_front(2);
        a.push_front(3);
        a.push_front(4);
        CHECK(a.length() == 4);
        CHECK(a.pop_front() == 4);
        CHECK(a.pop_front() == 3);
        CHECK(a.length() == 2);
    }

}

TEST_CASE("Pushing and popping elements from back", "[deck]") {

    SECTION("One element") {
        myDeck a;
        a.push_back(1);
        CHECK(a.size == 10);
        CHECK(!a.empty());
        CHECK(a.length() == 1);
        CHECK(a.pop_back() == 1);
        CHECK(a.size == 10);
        CHECK(a.empty());
        CHECK(a.length() == 0);
    }

    SECTION("Some elements") {
        myDeck a;
        a.push_back(1);
        a.push_back(2);
        a.push_back(3);
        CHECK(!a.empty());
        CHECK(a.length() == 3);
        CHECK(a.pop_back() == 3);
        CHECK(a.length() == 2);
        CHECK(a.pop_back() == 2);
        CHECK(a.length() == 1);
        CHECK(a.pop_back() == 1);
        CHECK(a.empty());
    }

    SECTION("Circle") {
        myDeck a(5);
        a.push_back(1);
        a.push_back(2);
        a.push_back(3);
        a.push_back(4);
        CHECK(a.length() == 4);
        CHECK(a.pop_back() == 4);
        CHECK(a.pop_back() == 3);
        CHECK(a.length() == 2);
    }

}

TEST_CASE("Exceptions", "[deck]") {

    SECTION("Initialize") {

        try {
            myDeck a(0);
        }
        catch (const char* str) {
            REQUIRE(strcmp(str, "Deck's size must be an positive integer") == 0);
        }

        try {
            myDeck a(-5);
        }
        catch (const char* str) {
            REQUIRE(strcmp(str, "Deck's size must be an positive integer") == 0);
        }

    }

    SECTION("Empty") {
        myDeck a;
        REQUIRE_THROWS_WITH(a.pop_front(), "Deck is empty");
        REQUIRE_THROWS_WITH(a.pop_back(), "Deck is empty");
    }

    /*SECTION("Full"){
        myDeck a(3);
        a.push_back(0);
        a.push_back(0);
        a.push_front(0);
        REQUIRE_THROWS_WITH(a.push_front(0), "Deck is full");
        REQUIRE_THROWS_WITH(a.push_back(0), "Deck is full");
    }*/

}

TEST_CASE("Printing", "[deck]"){
    SECTION("Empty deck"){

    }

    SECTION("Some elements"){

    }

    SECTION("Full deck"){

    }

}