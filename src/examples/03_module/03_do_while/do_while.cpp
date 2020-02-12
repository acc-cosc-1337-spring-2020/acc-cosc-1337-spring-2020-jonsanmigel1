#include "do_while.h"
#include <iostream>
#include "while.h"

//Write code for void function prompt_user to loop until
//user opts not to continue.  

//Write code for function run_menu that prompts  user for a 
//number from 1 to 4 and displays the option user selected.
/*
Use the existing menu_option function from /example/02_module/03_switch
folder.

*/
using std::cout; using std::cin;
void prompt_user()
{
	int choice;
	do
	{
		int num;
		cout << "Please enter a number";
		cin >> num;
		cout << sum_of_squares(num)<<"\n\n";

		std::cout << "Continue: ";
		std::cin >> choice;
		


	} while (choice==1);


}

void run_menu()
{


}
