#include <iostream>
#include <cmath>
using namespace std;

int p[4500] = {2, 3, 5, 7};
int p_cnt = 4;
int twinPrime[100000] = {3};
int twinPrime_cnt = 1;

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
	int prime;

	for(int i = 11, j = 2; i <= 4500; i += j, j = 6 -j)
	{
		if(isPrime(i))
			p[p_cnt++] = i;
	}
	//cout << p_cnt << " " << p[p_cnt -1] << endl;
	for(int i = 1; twinPrime_cnt < 100000; i++)
	{
		if(isPrime(6 * i - 1) && isPrime(6 * i + 1))
			twinPrime[twinPrime_cnt++] = (6 * i - 1);
	}
	//cout << twinPrime_cnt << " " << twinPrime[twinPrime_cnt - 1] << endl;
	while(cin >> prime)
	{
		cout << "(" << twinPrime[prime -1] << ", " << (twinPrime[prime -1] + 2) << ")" << endl;
	}
	return 0;
}