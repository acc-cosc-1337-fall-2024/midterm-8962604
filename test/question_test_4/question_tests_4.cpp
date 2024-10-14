#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test find_gcd function") {
    REQUIRE(find_gcd(15, 25) == 5);     // GCD of 15 and 25 is 5
    REQUIRE(find_gcd(16, 32) == 16);     // GCD of 16 and 32 is 16
    REQUIRE(find_gcd(159, 309) == 3);    // GCD of 159 and 309 is 3
}