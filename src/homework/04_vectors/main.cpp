
#include "vectors.h"
#include <iostream>
using std::cout;
using std::cin;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{

	std::vector<int> vect_of_ints= { 8,4,20,88,66,99 };
	
	
	char keep_going;
	char quit;
	

	do
	{
		int max_value;
		int choice;
		
		cout << "Type 1 for Get Max from vector";
		cout << "\nType 2 for Get primes";
		std::cin >> choice;
		if (choice == 1)
		{
			max_value = get_max(vect_of_ints);
			cout << "The maximum value of the vector is:  " << max_value;

		}
		else if (choice == 2)
		{
			int anumber;
			cout << "Please enter a prime Number";
			cin >> anumber;
			cout << "\nHere is the list of Primes:   ";
			vector_of_primes(anumber);

			
			
			
			
			
		}
		cout << "\nWould you like to continue?Press y for yes:  ";
		cin >> keep_going;
		if (keep_going == 'n')
		{
			cout << "The program will now exit";
		}

		
		


	} while (keep_going == 'y');

	

	return 0;
}