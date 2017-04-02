#include <iostream>
using namespace std;

int main()
{
	int x = 25; 
	int *ptr = nullptr;

	cout << "The address of x is " << ptr << endl;
	ptr = &x;
	cout << "The value in x is " << x << endl;
	cout << "The address of x is " << ptr << endl;
	cout << "The value in x is " << *ptr << endl;
	return 0;
}