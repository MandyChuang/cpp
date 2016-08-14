#include <iostream>
#include <cmath>
using namespace std;

int p[500000] = {2, 3, 5, 7};
int p_cnt = 4;

bool isPrime(int num)
{
	int max = sqrt(num);
	for(int i = 0; i < p_cnt && p[i] <= max; i++)
	{
		if(num % p[i] == 0)
			return false;
	}
	return true;
}

int main()
{
	int even, a, b;

	for(int i = 11, j = 2; i <= 500000; i += j, j = 6 - j)
	{
		if(isPrime(i))
			p[p_cnt++] = i;
	}
	// cout << p_cnt << " " << p[p_cnt - 1] << endl;
	// for(int i = 0; i < 25; i++)
	// 	cout << p[i] << " ";
	while(cin >> even)
	{
		if(even == 0)
			break;

		bool goldbach = true;
		for(int i = 0; p[i] <= (even / 2); i++)
		{
			a = p[i];
			b = even - a;
			if(isPrime(b))
			{
				goldbach = false;
				cout << even << " = " << a << " + " << b << endl;
				break;
			}
		}
		if(goldbach)
			cout << "Goldbach's conjecture is wrong." << endl;
	}
	return 0;
}