#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "Enter a number greater than 0: ";
	cin >> number;

	if (number > 0)
	{
		int number;
		cout << "Now enter another number: ";
		cin >> number;
		cout << "The second number you entered was " << number << endl;
	}
	cout << "Your first number was " << number << endl;
	return 0;
}