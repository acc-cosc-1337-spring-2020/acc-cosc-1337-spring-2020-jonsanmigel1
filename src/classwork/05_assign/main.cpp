//write include statemetns
#include"rectangle.h"
#include <vector>
#include<iostream>
using std::cout;
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{
	int total{ 0 };
	//std::vector<Rect>rectangles{ Rect(4,5),Rect(10,10),Rect(100,10) };

	std::vector<Rect> rectangle;

	Rect area1(4, 5);
	Rect area2(10, 10);
	Rect area3(100, 10);
	
	rectangle.push_back(area1);
	rectangle.push_back(area2);
	rectangle.push_back(area3);

	for (auto x : rectangle)
	{
		std::cout << x.get_area() << "\n";
		total = total + x.get_area();


	}
	cout << "Total Is"<<total;
	return 0;
}