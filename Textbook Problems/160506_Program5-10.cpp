#include <iostream>
using namespace std;

int main()
{
	int minNumber, maxNumber;

	cin >> minNumber >> maxNumber;

	cout << "Number Number Squared\n";
	cout << "---------------------\n";
	for (int num = minNumber; num <= maxNumber ; num++)
		cout << num << "\t\t" << (num * num) << endl;

	// for ( ; ; )
	// 	cout << "hello world\n";
	return 0;
}