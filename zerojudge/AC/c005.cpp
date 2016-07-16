#include <iostream>
using namespace std;

int main()
{
	long long int n, f, bonus[3], money;
	cin >> n;
	for(int j = 0; j < n; j++)
	{
		money = 0;
		cin >> f;
		for(int i = 0; i < f; i++)
		{
			cin >> bonus[0] >> bonus[1] >> bonus[2];
			money += bonus[0] * bonus[2];
		}
		cout << money << endl;
	}
	return 0;
}