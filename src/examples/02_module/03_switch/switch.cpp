//write include statement for switch header
#include "switch.h"

//Write code for function that accepts a num and returns a string 
//as follows:

string menu (int num)

{

	string result;

	switch (num)
	{
	case 1:
		result = "Option 1";

		break;

	case 2:
		result = "Option 2"; 
		
		break;
		//If we don't place break Each test case would be tested

	case 3:
		result = "Option 3";

		break;



	case 4:
		result = "Option 4";

		break;

	default:
		result = "Invalid Option";


	}
	
	return result;

}


//returns 'Option 1' when value 1
//returns 'Option 2' when value 2
//returns 'Option 3' when value 3
//returns 'Option 4' when value 4
//return 'Invalid Option' otherwise

