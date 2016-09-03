#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 6;
	
	int die1;
	int die2;

	unsigned seed = time(0);

	srand(seed);

	cout << "Rolling the dice...\n";
	die1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	die2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	cout << die1 << endl;
	cout << die2 << endl;
	return 0;
}