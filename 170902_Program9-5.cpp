#include <iostream>
using namespace std;

int main()
{
	short number[] = {10, 20, 30, 40, 50};

	cout << "First element of the array: " << *(number + 5) << endl;
}