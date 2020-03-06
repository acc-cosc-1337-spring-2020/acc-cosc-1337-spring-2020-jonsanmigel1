#include "bank_account.h"


//bank_account.cpp

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
		//We know we want to modify balance so we dont declare const
	}
	else
	{
		throw Invalid("Amount must be greater than 0");
	}

}

void BankAccount::withdraw(int amount)
{
	if (amount < 0 )
	{
		throw Invalid("Amount must be greater than 0");
	}
	else if(amount > balance)
	{
		throw Invalid("insufficient funds");

	}
	else
	{
		balance -= amount;

	}


}

void BankAccount::open(int amount)
{
	if (amount < min_balance_to_open)
	{
		throw Invalid("Amount must be at least 25...");
	}

	balance += amount;

}

double BankAccount::rate = init_rate();

void display_balance(const BankAccount & b)
{
	std::cout << "Balance is:  "<< b.balance<<"\n";
}

std::ostream & operator<<(std::ostream & out, const BankAccount & b)
{
	

	out << "Balance is:  " << b.balance<<"\n";


	return out;
	// TODO: insert return statement here
}
std::istream& operator >>(std::istream& in, BankAccount& b)
{	
	int amount;
	std::cout << "enter amount:  ";
	in >> amount;
	b.deposit(amount);
	return in;
}