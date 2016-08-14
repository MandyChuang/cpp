#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int p[10000] = {2, 3, 5, 7};
int p_cnt = 4;

bool prime(int n)
{
	int max = sqrt(n);
	for(int i = 0; i < p_cnt && p[i] <= max; i++)
	{
		if(n % p[i] == 0)
			return false;
	}
	return true;
}
int emirp(int a)
{
	int c = a;
	int b = 0;
	while(c != 0)
	{
		b *= 10;
		b += c % 10;
		c /= 10;
	}
	if(a == b)
		return 4;
	else
		return b;
}

int main()
{
	int num;

	for(int i = 11, j = 2; i <= 10000; i += j, j =6 - j)
	{
		if(prime(i))
			p[p_cnt++] = i;
	}
	// cout << p_cnt << " " << p[p_cnt - 1] << endl;
	while(cin >> num)
	{
		if(prime(num)) 
		{
			if( prime(emirp(num)))
				cout << num << " is emirp." << endl;
			else 
				cout << num << " is prime." << endl;
		}
		else
			cout << num << " is not prime." << endl;
	}
	return 0;
}