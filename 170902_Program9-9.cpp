#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 8;
	int set[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
	int *numPtr = nullptr;
	int count;

	numPtr = set;

	cout << "The numbers in set are: " << endl;
	for(count = 0; count < SIZE; count++)
	{
		cout << *numPtr << " ";
		numPtr++;
	}

	cout << endl << "The numbers in set backward are: " << endl;
	for(count = 0; count < SIZE; count++)
	{
		numPtr--;
		cout << *numPtr << " ";
	}
	return 0;
}