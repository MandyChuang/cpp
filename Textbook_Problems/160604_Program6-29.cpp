#include <iostream>
#include <cstdlib>
using namespace std;

void f();

int main()
{
	f();	
	return 0;
}

void f()
{
	cout << "This program terminates with the exit function.\n";
	cout << "Bye!\n";
	exit(0);
	cout << "This message will never be displayed\n";
	cout << "because the program has already terminated.\n";
}