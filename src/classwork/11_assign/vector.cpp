#include "vector.h"
#include "vector.h"
#include "vector.h"
#include "vector.h"
#include "vector.h"
#include "vector.h"
#include "vector.h"
#include "vector.h"
#include <iostream>
using std::cout;
template<typename T>
/*
Initialize nums to size dynamic array.
Initialize each array element to 0.
*/
Vector<T>::Vector(size_t sz)
	: size{ sz }, nums{ new T[sz] }
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}
template<typename T>
Vector<T>::Vector()
	:size{0},nums{nullptr },space{0}
{

}

/*
 Copy v.size to new class
 Create new dynamic memory array
 Initialize array elements to the v.nums array values
*/
template<typename T>
Vector<T>::Vector(const Vector<T> & v)
	: size{ v.size }, nums{ new T[v.size] }
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
template<typename T>
Vector<T> & Vector<T>::operator=(const Vector<T> & v)
{
	if (this == &v)//prevent self copy
	{
		return *this;
	}
	if (v.size <= space)
	{
		for (size_t i = 0; i < v.size; i++)
		{
			nums[i] = v[i];
		}
		return *this;
	}
	T* temp = new int[v.size];/////////////////////////////////////
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
template<typename T>
Vector<T>::Vector(Vector<T> && v)

	: size{ v.size }, nums{ v.nums },space{size}
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
template<typename T>
Vector<T> & Vector<T>::operator=(Vector<T> && v)
{
	delete nums;
	nums = v.nums;
	size = v.size;
	v.nums = nullptr;
	v.size = 0;

	return *this;
	// TODO: insert return statement here
}



//Make sure new allocation is greater than space
//Create temporary dynamic array of size new_allocation
//Copy value from old memory to temporary array 
//Delete old/current memory array 
//Set nums to temporary memory array
//Set space = new allocation 
template<typename T>
void Vector<T>::Reserve(size_t new_allocation)
{
	if (new_allocation <= space)
	{
		return;
	}
	T *temp = new T[new_allocation];

	for (size_t i= 0; i < size; ++i)
	{
		temp[i] = nums[i];

	}
	delete[] nums;
	nums = temp;
	space = new_allocation;

}
//Reserve space
//INitialize elements values beyond size to 0
template<typename T>
void Vector<T>::Resize(size_t new_size)
{
	Reserve(new_size);
	for (size_t i = size; i < new_size; ++i)
	{
		nums[i] = 0;
		
	}
	size = new_size;
}
template<typename T>
void Vector<T>::Push_back(T value)
{
	if (space == 0)
	{
		Reserve(RESERVE_DEFAULT_SIZE);
	}
	else if(size == space)
	{
		Resize(space * RESERVE_DEFAULT_MULTIPLIER);

	}
	nums[size] = value;
	++size;
}
template class Vector<int>;
template class Vector<double>;

//release dynamic memory
//dealocate memory
template<typename T>
Vector<T>::~Vector()
{
	std::cout << "Memory has been released\n";
	delete[] nums;
}

//free function
template<typename T>
void use_vector()
{
	Vector<int>* v1 = new Vector<int>(3)
	delete v1;
	v1 = nullptr;//point to nothing

}
template<typename T>
Vector<T> get_vector()
{
	Vector v(3);
	return v;
}
