/*
WITH LOOP OF YOUR CHOICE:
Write code for function factorial that accepts an int num
and returns the num's factorial

factorial(5);
1*2*3*4*5

returns 120




DON'T FORGET TO WRITE TEST CASE.  See file loop_test.cpp
*/

void factorial(int num)
{
	int total = 1;
	for (int i = 1; i < num + 1; i++)
	{

		total = i * total;
		cout << i << endl;
		cout << total << endl;

	}

	return total;
}
