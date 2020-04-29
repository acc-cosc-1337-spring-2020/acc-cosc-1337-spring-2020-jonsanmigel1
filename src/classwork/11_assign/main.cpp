#include "vector.h"
#include<iostream>

int main() 
{
	//lvalue-can reference or has an addrress that is accessbile 
	int num = 5; //5 is an rvalue
	int &&num_5 = 5; //&& creates an l value
	int &num_ref = num;
	Vector v1(3);
	v1 = get_vector();
	

	return 0;
}

