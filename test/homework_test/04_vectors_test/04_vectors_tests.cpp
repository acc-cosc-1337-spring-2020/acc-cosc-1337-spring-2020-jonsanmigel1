#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is Prime Function")
{
	
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);
}
TEST_CASE("Verify Get Max function")
{
	std::vector<int> my_vector1 = { 3,8,1,99,1000 };
	std::vector<int> my_vector2 = { 15,12,11,99,88 };
	std::vector<int> my_vector3 = { 150,120,11,990,88888 };

	REQUIRE(get_max(my_vector1) == 1000);
	REQUIRE(get_max(my_vector2) == 99);
	REQUIRE(get_max(my_vector3) == 88888);

}

TEST_CASE("Verify that the retuned list matches")
{
	std::vector<int> my_vector = { 2,3,5,7 };
	std::vector<int> other_vector = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	REQUIRE(vector_of_primes(10) == my_vector);
	REQUIRE(vector_of_primes(50) == other_vector);
}

