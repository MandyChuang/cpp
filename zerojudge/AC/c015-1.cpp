#include <iostream>
using namespace std;

int reverse(int n)
{
	int reversed = 0;
	while(n != 0)
	{
		reversed = n % 10 + reversed * 10;
		n = n / 10;
	}
	return reversed;
}

int main()
{
	int t, n, count, reversed;
	for(cin >> t; t > 0; t--)
	{
		cin >> n;
		count = 0;
		while(true)
		{
			reversed = reverse(n);// reversed
			if(count != 0 && reversed == n)// if (first - do nothing) else (reversed = n - break)
			{
				break;
			}
			n += reversed;
			count++;
		}
		cout << count << " " << n << endl;
	}
	return 0;
}