#include <iostream>

using namespace std;

int main()
{
	char redo;
	do
	{
    double length, width;
	double perimeter, area;              // declarations
	cout << "Length = ";             // prompt user
	cin >> length;                    // enter length
	cout << "Width = ";               // prompt user
	cin >> width;                     // input width
	perimeter = 2 * (length + width);     // compute perimeter
	area = length*width;              // compute area
	cout << endl
		<< "Perimeter is " << perimeter;
	cout << endl
		<< "Area is " << area
		<< endl;                    // output results
    cout << "*********************************" << endl;
		cout << "Enter y for next calculation  =  ";
		cin >> redo;
		cout << endl;

	} while (redo == 'y');

    return 0;
} // end of main program
