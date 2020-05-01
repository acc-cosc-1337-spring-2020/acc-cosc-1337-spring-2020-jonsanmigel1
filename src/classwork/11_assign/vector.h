#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<stddef.h>

class Vector
{
public:
	Vector(size_t sz);
	Vector(const Vector& v);//copy constructor- Rule of 3 c++98
	Vector& operator=(const Vector& v);//copy assignment-Rule of 3 c++98
	Vector(Vector&& v); //move constructor Rule of 5 c++11
	Vector&operator =(Vector&& v); //move assignment
	size_t Size()const { return size; }
	int& operator[](int i) { return nums[i]; }
	int& operator[](int i)const { return nums[i]; }
	void Reserve(size_t new_allocation);
	size_t Capacity()const { return space; }
	void Resize(size_t new_size);
	void Push_back(int value);
	~Vector();//Destructor-Rule of 3
private:
	size_t space{ 0 };
	size_t size;
	const int RESERVE_DEFAULT_SIZE{ 8 };
	const int RESERVE_DEFAULT_MULTIPLIER{ 2};
	int* nums;
};

#endif // !1

// doesnt belong to class / free functon
void use_vector();

Vector get_vector();