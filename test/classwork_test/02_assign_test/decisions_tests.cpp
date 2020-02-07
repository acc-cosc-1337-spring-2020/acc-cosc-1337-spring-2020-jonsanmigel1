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
	REQUIRE(gross_pay(10, 15) == 150);
	REQUIRE(gross_pay(5, 20.0) == 100);
	REQUIRE(gross_pay(20, 10) == 600.75);


}
