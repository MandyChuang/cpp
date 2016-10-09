#include <iostream>
using namespace std;

int main()
{
	char ch;

	cout << "1 This program has paused. Press Enter to continue.";
	cin.get(ch);
	cout << "2 This program has paused. Press Enter to continue.";
	ch = cin.get();
	cout << "3 This program has paused. Press Enter to continue.";
	cin.get();
	cout << "Thank you!";

	return 0;
}