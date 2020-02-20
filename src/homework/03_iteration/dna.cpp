#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
int get_gc_content(const string astring)
{

	
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string string1)
{

	string unknown_str = string1;

	string name_rev;

	int count = 2; (or unknown_str.length - 1)
		//Remember indexing starts from 0 
	for (int i = 0; i < unknown_str.length(); i++)
	{

		name_rev.push_back(string1[count]);
		count = count - 1;

	}
	cout << name_rev;

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

