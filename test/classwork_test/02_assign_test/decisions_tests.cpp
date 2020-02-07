#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include"decision.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Valvulate pay ")
{
	REQUIRE(gross_pay(50, 10) == 550);
	REQUIRE(gross_pay(43, 13.50) == 600.75);

}
