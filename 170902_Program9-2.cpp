#include <iostream>
using namespace std;

int main()
{
	int x = 25;
	int *ptr = nullptr;

	ptr = &x;
	cout << "Value: " << x << endl;
	cout << "Address: " << ptr << endl;
	cout << "Value: " << *ptr << endl;
}