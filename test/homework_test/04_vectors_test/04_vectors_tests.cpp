#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify that the retuned list matches")
{
	std::vector<int> my_vector = { 0,3,6,9,12 };
	REQUIRE(vector_of_primes(5) == my_vector);
}

