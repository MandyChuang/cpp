#include <iostream>
using namespace std;

int main()
{
	// char ch;
	// int number;

	// cout << "Enter a number: ";
	// cin >> number;
	// cout << "Enter a character: ";
	// ch = cin.get();
	// ch = cin.get();
	// cout << "Thank You!\n";

	char ch;
	int number;

	cout << "Enter a number: ";
	cin >> number;
	cin.ignore();
	cout << "Enter a character: ";
	ch = cin.get();
	cout << "Thank You!\n";

	return 0;
}