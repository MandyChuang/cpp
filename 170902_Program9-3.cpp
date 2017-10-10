#include <iostream>
using namespace std;

int main()
{
	int x = 25;
	int *ptr = nullptr;

	ptr = &x;

	cout << "Value(Printed twice): " << endl;
	cout << x << endl;
	cout << *ptr << endl;

	*ptr = 100;

	cout << "Value(Printed twice): " << endl;
	cout << x << endl;
	cout << *ptr << endl;
}