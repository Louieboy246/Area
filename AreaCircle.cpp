/**
* Title               : Area of Circle (Area of Circle.cpp)
* Program Description : Write a C++ program to calculate
* and print the Area of a Circle.
* Author              : robustprogramming.com
* Interface           : Console
* IDE                 : Code::Blocks 13.12
* Operating System    : Windows 8.1
*/

#include<iostream>

using namespace std;

int main()
{
	const float PI = 3.1416;
	float radius;
	double area;

	cout << " C++ Program to Find Area of Circle" << endl;
	cout << " Enter Radius : ";
	cin >> radius;

	area = PI * radius * radius;
	cout << " Area of Circle  = " << area << endl;

	cout << " Press enter to continue..." << endl;
	cin.ignore();
	cin.get();

	return 0;
}
