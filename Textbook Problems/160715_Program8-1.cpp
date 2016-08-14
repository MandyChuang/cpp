#include <iostream>
using namespace std;

int searchList(const int [], int, int);
const int SIZE = 5;

int main()
{
	int tests[SIZE] = {87, 75, 98, 100, 82};
	int results;

	results = searchList(tests, SIZE, 100);
	if(results == -1)
		cout << "You did not earn 100 points on any test\n";
	else
	{
		cout << "You earned 100 points on test " << (results + 1) << endl;
	}
	return 0;
}

int searchList(const int list[], int numElems, int value)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while(index < numElems && !found)
	{
		if(list[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}