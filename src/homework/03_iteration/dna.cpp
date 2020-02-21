#include "dna.h"
#include<iostream>


using std::endl;
using std::cout;



/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string &input)
{
	double count = 0;
	double percent;
	double length = input.length();
	

	for (int i = 0; i<input.length(); i++)
	{
		if (input[i] == 'G' || input[i] == 'C')
		{
			count = count + 1;
		}

	}
	percent = (count / length) * 100;
	cout << percent;

	return percent;
	
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string astring)
{
	string original = astring;
	string name_rev;
	int count = original.length() - 1;

	for (int i = 0; i < original.length(); i++)
	{

		name_rev.push_back(original[count]);
		count = count - 1;
	}
	cout << name_rev;
	return astring;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string astring)
{
	string complement;
	string save_results;
	save_results = get_reverse_string(astring);
	for (int i = 0; i < save_results.length(); i++)
	{
		if (i == 'A')
		{
			i = 'T';
		}
		if (i == 'T')
		{
			i = 'A';
		}
		if (i == 'C')
		{
			i = 'G';
		}
		if (i == 'G')
		{
			i = 'C';
		}


		
	}
	return save_results;
}

