#include<iostream>
#include<string>
#include <iomanip>
#include <stdio.h>
using std::cout; using std::cin; using std::string;
using namespace std;
//write include statements
#include "decisions.h"

/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
int main() 
{	//Declare Lists of functions 
	int list_of_credit_hours[3] = {};
	string list_of_letter_grade[3] = {};
	int list_of_grade_points[3] = {};
	int list_of_credit_points[3] = {};

	int total_credit_hours = 0;
	string letter_grade;
	int credit_hours, sum_credit_hours = 0, sum_credit_points = 0;
	int total_credit_points = 0;
	//Ask 1
	cout << "Enter letter grade: ";
	cin >> letter_grade;
	cout << "Enter credit hours: ";
	cin >> credit_hours;
	//INsert Array appendage
	list_of_credit_hours[0] = credit_hours;
	list_of_letter_grade[0] = letter_grade;
	list_of_grade_points[0] = get_grade_points(letter_grade);
	list_of_credit_points[0] = list_of_grade_points[0] * credit_hours;
	//Call functions
	sum_credit_points += get_grade_points(letter_grade) * credit_hours;
	sum_credit_hours += credit_hours;
	total_credit_hours = total_credit_hours + credit_hours;

	//Ask 2
	cout << "Enter letter grade: ";
	cin >> letter_grade;
	cout << "Enter credit hours: ";
	cin >> credit_hours;
	//Insert array Appendgae 
	list_of_credit_hours[1] = credit_hours;
	list_of_letter_grade[1] = letter_grade;
	list_of_grade_points[1] = get_grade_points(letter_grade);
	list_of_credit_points[1] = list_of_grade_points[1] * credit_hours;
	//Call functions
	sum_credit_points += get_grade_points(letter_grade)  * credit_hours;
	sum_credit_hours += credit_hours;
	total_credit_hours = total_credit_hours + credit_hours;

	//Ask 3
	cout << "Enter letter grade: ";
	cin >> letter_grade;
	cout << "Enter credit hours: ";
	cin >> credit_hours;
	//INsert array appednage
	list_of_credit_hours[2] = credit_hours;
	list_of_letter_grade[2] = letter_grade;
	list_of_grade_points[2] = get_grade_points(letter_grade);
	list_of_credit_points[2] = list_of_grade_points[2] * credit_hours;
	//Call functions
	sum_credit_points += get_grade_points(letter_grade)  * credit_hours;
	sum_credit_hours += credit_hours;
	total_credit_hours = total_credit_hours + credit_hours;
	

	double gpa = calculate_gpa(sum_credit_hours, sum_credit_points);
	cout << "GPA: " << gpa<<endl;
	cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
	//cout << "Credit Hours\t Letter Grade\t Grade Points\t credit Points"<<endl;
	cout << setw(2) << "Credit Hours" << setw(20) << "Letter grade"<<setw(20)<< "Grade Points"<<setw(20) <<"Credit Points"<<endl;
	
	for (int i = 0; i < 3; i++)
	{

		cout << setw(1) << list_of_credit_hours[i] << setw(20) << list_of_letter_grade[i] <<setw(20)<<list_of_grade_points[i]<<setw(20)<<list_of_credit_points[i]<<endl;
		
	}
	/*cout << setw(2) << list_of_credit_hours[0] << setw(20) << list_of_letter_grade[0]<<endl
		 << setw(2) << list_of_credit_hours[1] << setw(20) << list_of_letter_grade[1]<<endl
		 << setw(2) << list_of_credit_hours[2] << setw(20) << list_of_letter_grade[2]<<endl;
		 */
	
	cout <<"Total\n" << total_credit_hours;
	
	for (int i = 0; i < 3; i++)
	{
		total_credit_points = list_of_credit_points[i] + total_credit_points;


	}
	cout << setw(60)<<total_credit_points;
	

	return 0;
}