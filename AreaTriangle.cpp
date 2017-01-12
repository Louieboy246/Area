#include<iostream>

using namespace std;

int main()
{
	double base, height, area;
	char redo;
	do
	{
		cout << "Enter base of Triangle " << endl;
		cin >> base;
		cout << endl;

		cout << "Enter height of Triangle " << endl;
		cin >> height;
		cout << endl << endl;

		area = 0.5 * base * height;

		cout << "Area of Triangle is  =  " << area;
		cout << endl;
		cout << "*********************************" << endl;
		cout << "Enter y for next calculation  =  ";
		cin >> redo;
		cout << endl;

	} while (redo == 'y');

	return 0;
}
