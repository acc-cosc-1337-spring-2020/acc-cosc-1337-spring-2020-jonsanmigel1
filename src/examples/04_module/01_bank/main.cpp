#include "bank_account.h"
#include <iostream>
using std::cout;
using std::cin;
int main()
{
	
	//auto num{ 0 };//Initialize the variable give the variable a defualt initialization
	
	BankAccount account(500);//create object
	std::cin >> account;
	
	std::cout << account;
	display_balance(account);

	auto balance = account.get_balance();//this balance variable is not the same as our class they are 2 different variables in memory


	cout << "Balance is:  " << balance;

	auto amount{ 0 };
	cout << "Enter Deopsit  amount:  ";
	cin >> amount;

	try
	{


		account.deposit(amount);
		cout << "Balance is:  " << balance;
	}
	catch (Invalid e)
	{
		cout << e.get_error() << "\n";

	}


	return 0;
}