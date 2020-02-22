//write include statements
#include "dna.h"
#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::cin;
using namespace std;
//write using statements

//Testing if changes were made 1/30/2020

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main()
{
	string reloop;
	do
	{


		string choice;
		string DNA;
		cout << "Please enter 1 for GC Content or 2 for Get DNA Complement" << endl;
		cin >> choice;
		cout << "Please enter a DNAstring:  ";
		cin >> DNA;
		if (choice == "1")
		{

			get_gc_content(DNA);
		}
		if (choice == "2")
		{
			get_dna_complement(DNA);
			
		}
		cout << "\nWould you like to continue? Type yes to continue";
		cin >> reloop;
	} while (reloop == "yes");
	

	return 0;
}