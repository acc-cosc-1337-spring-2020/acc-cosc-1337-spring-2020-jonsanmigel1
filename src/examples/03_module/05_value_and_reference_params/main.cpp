#include<iostream>
using std::cout;

int main() 
{
	int num = 5;
	cout << "Value  of num is : " << num<< "Address is" << &num;

	//Create a reference variable
	int &num_ref = num;

	//you now have access to the memory so you can change the number stored
	num_ref = 10;
	cout << "\nValue  of num is : " << num << "Address is" << &num;


	//Cout will display 10 not 5 anymore 

	return 0;
}