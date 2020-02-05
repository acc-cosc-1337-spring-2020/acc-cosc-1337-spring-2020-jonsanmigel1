#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is even_function")
{

	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(3) == false);


}
TEST_CASE("Test GENERATION FUNCTION")
{
	REQUIRE(get_generation(2010) == "Centenial");
	REQUIRE(get_generation(1990) == "Millenial");
	REQUIRE(get_generation(1967) == "Generation X");
	REQUIRE(get_generation(1947) == "Baby boomer");
	REQUIRE(get_generation(1927) == "Silent Generation");
	REQUIRE(get_generation(1954939) == "Invalid Year");
}

