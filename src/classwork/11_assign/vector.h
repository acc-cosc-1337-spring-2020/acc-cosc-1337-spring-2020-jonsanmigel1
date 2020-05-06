#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<stddef.h>
template<typename T>
class Vector
{
public:
	Vector() = default;
	Vector(size_t sz);
	Vector(const Vector<T>& v);//copy constructor- Rule of 3 c++98
	Vector<T>& operator=(const Vector<T>& v);//copy assignment-Rule of 3 c++98
	Vector(Vector<T>&& v); //move constructor Rule of 5 c++11
	Vector<T>&operator =(Vector<T>&& v); //move assignment
	size_t Size()const { return size; }
	T& operator[](int i) { return nums[i]; }
	T& operator[](int i)const { return nums[i]; }
	void Reserve(size_t new_allocation);
	size_t Capacity()const { return space; }//how many items can go in vector
	void Resize(size_t new_size);//when we need more space for vecotr it initializes new size values to 0 
	void Push_back(T value);
	~Vector();//Destructor-Rule of 3
private:
	size_t space{ 0 };
	size_t size;
	const int RESERVE_DEFAULT_SIZE{ 8 };
	const int RESERVE_DEFAULT_MULTIPLIER{ 2};
	T* nums;
};

#endif // !1

// doesnt belong to class / free functon
void use_vector();

Vector<int> get_vector();
