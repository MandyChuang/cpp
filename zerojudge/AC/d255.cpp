#include <iostream>
using namespace std;

int GCD(int i, int j)
{
	if(j == 0)
		return i;
	return GCD(j, i % j);
}

int main()
{
	int n;
	while(cin >> n)
	{
		if(n == 0)
			break;
		int g = 0;
		for(int i = 1; i < n; i++)
		{
			for(int j = i + 1; j <= n; j++)
			{
				g += GCD(i, j);
			}
		}
		cout << g << endl;
	}
	return 0;
}