#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "switch.h"
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

TEST_CASE("Test menu function")
{
	REQUIRE(menu(1) == "Option 1");
	REQUIRE(menu(2) == "Option 2");
	REQUIRE(menu(3) == "Option 3");
	REQUIRE(menu(4) == "Option 4");
	REQUIRE(menu(0) == "Invalid Option");
	REQUIRE(menu(5) == "Invalid Option");

}

