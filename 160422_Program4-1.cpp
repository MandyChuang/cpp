#include <iostream>
using namespace std;

int main()
{
	bool trueValue, falseValue;
	int x = 5, y = 10;

	trueValue = x < y;
	falseValue = y == x;

	cout << "True is " << (x < y) << endl;
	cout << "False is " << (y == x) << endl;
	return 0;
}