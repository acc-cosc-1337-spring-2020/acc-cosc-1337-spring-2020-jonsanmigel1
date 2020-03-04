//bank_account.h
#include <string>
class BankAccount
{
public:
	BankAccount() = default;
	explicit BankAccount(int b) : balance{ b } { }// constructor is always the name of th class/it does not return a value
	//if someone wants to use constructor they have to explicitly call it

	int get_balance()const { return balance; }
	void deposit(int amount); //create deposit prototype 
	void withdraw(int amount);
	void open(int amount);

private:
	int balance{ 0 };//withdraw deposit and bank account can read this variable, and can reasssign that variable
	const int min_balance_to_open{ 25 };




};

class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;
};
