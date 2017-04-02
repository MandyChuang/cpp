#include <iostream>
using namespace std;

int main()
{
	int x = 25;
	cout << "The address of x is " << &x << endl;
	cout << sizeof(x) << " bytes" << endl;
	cout << "x : " << x << endl;
	return 0;
}