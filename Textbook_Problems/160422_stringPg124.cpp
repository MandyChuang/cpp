#include <iostream>
using namespace std;

int main()
{
	string state = "Texas";
	cout << state.length() << endl;

	string greeting1 = "Hello ";
	string greeting2;
	string name1 = "World";
	string name2 = "People";

	greeting2 = greeting1 + name1;
	greeting1 += name2;

	cout << greeting1 << endl;
	cout << greeting2 << endl;

	return 0;
}