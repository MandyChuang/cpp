#include <iostream>
using namespace std;

int main()
{
	int x = 25;
	int *ptr = nullptr;

	ptr = &x;

	cout << "value in x: " << endl;
	cout << x << endl;
	cout << *ptr << endl;

	*ptr = 100;
	cout << "value in x: " << endl;
	cout << x << endl;
	cout << *ptr << endl;
	return 0;
}