#include <iostream>
using namespace std;

int main()
{
	int x = 25;

	cout << "Address: " << &x << endl;
	cout << "Size: " << sizeof(x) << " bytes" << endl;
	cout << "Value: " << x << endl;
	cout << sizeof(&x) << endl;
	return 0;
}