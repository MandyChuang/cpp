#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a = 1.5;
	double b = 1.5;

	a += 0.0000000000000001;
	if (a == b)
		cout << "Both a and b are the same.\n";
	else
		cout << "a and b are not the same.\n";

	int value = -1;
	double x = 1, y = -1;
	if (value)
		cout << "Value is True!\n";
	if (x + y)
		cout << "x + y is True!\n";
	if (pow(a, b))
		cout << "pow(a, b) is True!\n";
	if (2 == x) 
		cout << "It is True!\n";
	return 0;
}