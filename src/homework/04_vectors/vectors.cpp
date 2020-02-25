#include "vectors.h"
#include <vector>
#include <string>
#include <iostream>
using std::cin;
using std::cout; 

/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/
int get_max(const std::vector<int> &paramnumbers)
{
	int max = *max_element(paramnumbers.begin(), paramnumbers.end());
	cout << "The Maximum Value is" << max;
	return max;

}


/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
bool is_prime(int paramnumber)
{
	int i = 2;
	bool isPrime = true;




	if (paramnumber % i == 0)
	{
		isPrime = false;
		return isPrime;

	}

	else
	{
		cout << "This is a prime number";
		return isPrime;

	}

	

	
}






/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/

std::vector<int> vector_of_primes(int aNumber)
{
	std::vector<int> aVector;
	for (int i = 0; i < aNumber; i++)

		aVector.push_back(i * 3);
	cout << vector_of_primes;

	return aVector;
	//result 0,3,6,9,12


}