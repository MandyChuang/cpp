#include <iostream>
using namespace std;

int main()
{
	int year;
	cin >> year;
	bool isLeap = false;

	if (year % 4 == 0)
		isLeap = true;
	if (year % 100 == 0)
		isLeap = false;
	if (year % 400 == 0)
		isLeap = true;
	if (isLeap)
		cout << "a leap year" << endl;
	else 
		cout << "a normal year" << endl;
	return 0;
}