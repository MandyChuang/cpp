#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 8;
	int numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
	int *ptr = numbers;

	cout << "The numbers are: " << endl;
	cout << *ptr << " ";
	while(ptr < &numbers[SIZE - 1])
	{
		ptr++;
		cout << *ptr << " ";
	}

	cout << endl << "Ther numbers in reverse order: " << endl;
	cout << *ptr << " ";
	while(ptr > numbers)
	{
		ptr--;
		cout << *ptr << " ";
	}
	return 0;
}