//bank_account.h
#include <string>
class BankAccount
{
public:
	BankAccount(int b) : balance{ b } { }// constructor is always the name of th class/it does not return a value

	int get_balance()const { return balance; }
	void deposit(int amount); //create deposit prototype 
	void withdraw(int amount);

private:
	int balance;//withdraw deposit and bank account can read this variable, and can reasssign that variable



};

class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;
};
