#include <iostream>
using namespace std;

int main()
{
	int set[8] = {5, 10, 15, 20, 25, 30, 35, 40};
	int *nums = set;

	cout << "The numbers :" << endl;
	cout << *nums << " ";
	while(nums < &set[7])
	{
		nums++;
		cout << *nums << " ";
	}
	cout << endl;
	cout << "Backward: " << endl;
	cout << *nums << " ";
	while(nums > set)
	{
		nums--;
		cout << *nums << " ";
	}
	return 0;
}