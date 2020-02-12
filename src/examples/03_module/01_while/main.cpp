#include "while.h"
#include <iostream>
using std::cout; using std::cin;
int main() 
{
	int num,sum;
	cout << "Please enter a number";
	cin >> num;
	sum = sum_of_squares(num);
	cout << num<<sum;
	return 0;
}