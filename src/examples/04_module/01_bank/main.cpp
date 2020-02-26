#include "bank_account.h"
#include <iostream>
using std::cout;
using std::cin;
int main()
{
	//auto num{ 0 };//Initialize the variable give the variable a defualt initialization

	BankAccount account(500);//create object
	

	
	
	auto balance =account.get_balance();
	//this balance variable is not the same as our class they are 2 different variables in memory
	
	
	cout << "Balance is:  " << balance;

	auto amount{ 0 };
	cout << "Enter Deopsit  amount:  ";
	cin >> amount;

	account.deposit(amount);
	cout << "Balance is:  " << balance;




	return 0;
}