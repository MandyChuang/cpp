#include <iostream>
#include <string>
using namespace std;

int main()
{
	// string name, city;

	// cout << "Enter your name: " ;
	// cin >> name;
	// cout << "Enter the city you live in: ";
	// cin >> city;
	// cout << "Hello, " << name << endl;
	// cout << "You live in " << city << endl;

	string name, city;

	cout << "Enter your name: " ;
	getline(cin, name);
	cout << "Enter the city you live in: ";
	getline(cin, city);
	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;

	return 0;
}