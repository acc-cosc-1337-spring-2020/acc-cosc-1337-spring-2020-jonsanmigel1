
#include <iostream>
using std::cout;

int main() 
{
	int *ptr_num = new int(5);
	cout << "address of ptr_num:  " << &ptr_num << "\n";
	cout << " Address ptr_num points to:  " << ptr_num << "\n";
	cout << "Value at address ptr_num points to:  " << *ptr_num;

	delete ptr_num;
	ptr_num = nullptr;
	cout << ptr_num;
	
	return 0;
}