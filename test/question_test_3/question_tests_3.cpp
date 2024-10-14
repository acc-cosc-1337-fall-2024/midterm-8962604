#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Testing get_kinetic_energy function") {

    SECTION("Test Case 1: Mass = 10, Velocity = 9") {
        REQUIRE(get_kinetic_energy(10, 9) == Approx(405).epsilon(0.01));
    }

    SECTION("Test Case 2: Mass = 20, Velocity = 5") {
        REQUIRE(get_kinetic_energy(20, 5) == Approx(250).epsilon(0.01));
    }

    SECTION("Test Case 3: Mass = 30, Velocity = 7") {
        REQUIRE(get_kinetic_energy(30, 7) == Approx(735).epsilon(0.01));
    }

    SECTION("Test Case 4: Testing for boundary conditions") {
        // Testing mass = 0 (should return 0 kinetic energy)
        REQUIRE(get_kinetic_energy(0, 10) == Approx(0).epsilon(0.01));

        // Testing velocity = 0 (should return 0 kinetic energy)
        REQUIRE(get_kinetic_energy(10, 0) == Approx(0).epsilon(0.01));

        // Testing very large mass and velocity values
        REQUIRE(get_kinetic_energy(1e6, 1e3) == Approx(5e11).epsilon(0.01));
    }
}

