#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int output[100];
		int i = 0;
		while(n)
		{
			output[i++] = n % 2;
			n = n / 2;
		}
		for(int j = i - 1; j >= 0; j--)
			cout << output[j];
		cout << endl;
	}
	return 0;
}

// 3/2 = 1 ... 1
// 1/2 = 0 ... 1

// 6/2 = 3 ... 0
// 3/2 = 1 ... 1
// 1/2 = 1 ... 1