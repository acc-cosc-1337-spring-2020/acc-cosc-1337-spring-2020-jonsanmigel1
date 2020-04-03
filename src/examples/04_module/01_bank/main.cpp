#include "checking_account.h"
#include "savings_account.h"
#include <memory>
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::unique_ptr; using std::make_unique;

int main()
{	
	
	//c++11 SMart pointer protects against memory leaks

	//compiler
	unique_ptr<BankAccount>  s = make_unique<SavingsAccount>(90);
	unique_ptr<BankAccount> c = make_unique<CheckingAccount>(100);
	
	
	
	std::vector<unique_ptr<BankAccount>>accounts;
	accounts.push_back(std::move(s));
	accounts.push_back(std::move(c));
	

	for (auto &act : accounts)
	{
		cout << act->get_balance() << "\n";
	}
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