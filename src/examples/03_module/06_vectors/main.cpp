#include "vec.h"

int main() 
{	
	std::vector<int>nums{ 9, 10, 99, 5, 67 };
	loop_vector_w_index(nums);
	//since we pass by value this will cretae a copy 

	return 0;
}