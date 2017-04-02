#include <iostream>
using namespace std;

int main()
{
	short numbers[] = {10, 20, 30, 40, 50};

	cout << "The first element of the array is " << *numbers << endl;
	cout << &numbers << endl;
	cout << &numbers[0] << endl;
	return 0;
}