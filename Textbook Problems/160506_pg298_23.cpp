#include <iostream>
using namespace std;

int main()
{
	for (int row = 1; row <= 10; row++)
	{
		for (int star = 1; star <= row; star++)
		{
			cout << "+";
		} 
		cout << endl;
	}

	for (int row = 10; row >= 1; row--)
	{
		for (int star = 1; star <= row; star++)
		{
			cout << "+";
		}
		cout << endl;
	}
	return 0;
}