#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//double x = 123.4, y = 456.0;
	// cout << setprecision(6) << showpoint << x << endl;
	// cout << y << endl;
	
	double x = 146.789, y = 24.2, z = 1.783;
	cout << left << setw(10) << x << endl;
	cout << setw(10) << y << endl;
	cout << setw(10) << z << endl;

	return 0;
}