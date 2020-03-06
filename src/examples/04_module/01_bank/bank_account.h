//bank_account.h
#include <string>
#include <iostream>
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
	double get_rate() { return rate; }
	friend void display_balance(const BankAccount& b);//not part of class but we need to decalre it here
	friend std::ostream& operator<<(std::ostream& out, const BankAccount& b);//Required syntax to use cout with a class
	friend std::istream& operator>>(std::istream& in, BankAccount& b);

private:
	int balance{ 0 };//withdraw deposit and bank account can read this variable, and can reasssign that variable
	const int min_balance_to_open{ 25 };
	static double rate;//we cannot give a static variable a value inside the class
	static double init_rate() { return .025; }





};

class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;
};
