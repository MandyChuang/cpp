// Rewrite the following loop so it uses pointer notation (with the indirection operator) instead of subscript notation.
// for (int x = 0; x < 100; x++) 
// 	cout << arr[x] << endl;

#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 100;
	int arr[SIZE] = {};
	int *arrPtr = arr;

	for(int x = 0; x < SIZE; x++)
	{
		cout << *(arrPtr + x) << endl;
	}
}

