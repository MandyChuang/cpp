#include <iostream>
using namespace std;

int main()
{
	int x = 25, y = 50, z = 75;
	int *ptr = nullptr;

	cout << "value in x, y, and z: " << endl;
	cout << x << " " << y << " " << z << endl;

	ptr = &x;
	*ptr += 100;

	ptr = &y;
	*ptr += 100;

	ptr = &z;
	*ptr += 100;

	cout << "value in x, y, and z: " << endl;
	cout << x << " " << y << " " << z << endl;
	return 0;
}