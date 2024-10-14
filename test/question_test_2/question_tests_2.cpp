#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test modifyByValue function") {
    int value = 10;
    modifyByValue(value);  // Pass by value, should not modify the original
    REQUIRE(value == 10);  // Original value should remain the same
}

TEST_CASE("Test modifyByReference function") {
    int value = 10;
    modifyByReference(value);  // Pass by reference, should modify the original
    REQUIRE(value == 20);      // Value should now be changed to 20
}