#include <iostream>
using namespace std;

// 1
// 22
// 333
// 22
// 1

// 1
// 22
// 333
// 22
// 1

int main()
{
	int t, A, F;
	int first = 0;

	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		cin >> A >> F;
		for(int j = 1; j <= F; j++)
		{
			if(first == 0)
			{
				first = 1;
			}
			else
			{
				cout << endl;
			}
			for(int k = 1; k <= A; k++)
			{
				for(int m = 0; m < k; m++)
				{
					cout << k;
				}
				cout << endl;
			}
			for(int k = A-1; k >= 1; k--)
			{
				for(int m = 0; m < k; m++)
				{
					cout << k;
				}
				cout << endl;
			}
		}
	}
	return 0;
}