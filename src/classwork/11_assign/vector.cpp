#include "vector.h"
#include "vector.h"
#include "vector.h"
#include "vector.h"
#include "vector.h"
#include <iostream>
using std::cout;
/*
Initialize nums to size dynamic array.
Initialize each array element to 0.
*/
Vector::Vector(size_t sz)
	: size{ sz }, nums{ new int[sz] }
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}

/*
 Copy v.size to new class
 Create new dynamic memory array
 Initialize array elements to the v.nums array values
*/
Vector::Vector(const Vector & v)
	: size{ v.size }, nums{ new int[v.size] }
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}
}
//Allocate temporary dynamic array of size v(v1)
//Copy v1 elements to temp array
//Deallocate old v2 nums array(clear the memory)
//Point v2 nums array to temp array
//Set v2 size to v1 size
//Return a self cop of this vector

Vector & Vector::operator=(const Vector & v)
{
	int* temp = new int[v.size];

	for (size_t i = 0; i < v.size; ++i)
	{
		temp[i] = v[i];
	}
	delete nums;

	nums = temp;
	size = v.size;

	return *this;
	// TODO: insert return statement here
}
/*
Get the dynamic memory from v
get the size from v 
Point the v.nums to nullptr
*/
Vector::Vector(Vector && v)

	: size{ v.size }, nums{ v.nums }
	{
		v.size = 0;
		v.nums = nullptr;
	}

/*
Deallocate original ynamic memory 
get the dynamic memory from v 
get the size from v
Point v.nums to null ptr
set v.size to 0

*/
Vector & Vector::operator=(Vector && v)
{
	delete nums;
	nums = v.nums;
	size = v.size;
	v.nums = nullptr;
	v.size = 0;

	return *this;
	// TODO: insert return statement here
}




//release dynamic memory
//dealocate memory
Vector::~Vector()
{
	std::cout << "Memory has been released\n";
	delete[] nums;
}

//free function
void use_vector()
{
	Vector * v1= new Vector(3);
	delete v1;
	v1 = nullptr;//point to nothing

}

Vector get_vector()
{
	Vector v(3);
	return v;
}
