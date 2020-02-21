#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Veryify That string compliment works")
{
	REQUIRE(get_dna_compliment("AAAACCCGGT" == "ACCGGGTTTT");
}

