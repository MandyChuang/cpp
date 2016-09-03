#include <iostream>
using namespace std;

void showValue(int[], int);

int main()
{
	const int ARRAY_SIZE = 8;
	int numbers[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

	showValue(numbers, ARRAY_SIZE);
	return 0;
}

void showValue(int nums[], int size)
{
	for(int index = 0; index < size; index++)
		cout << nums[index] << " ";
	cout << endl;
}