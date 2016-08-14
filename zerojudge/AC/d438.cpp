// dig 0 1 2 3 3 4

#include <iostream>
#include <cmath>
using namespace std;

int p[1000] = {2, 3, 5, 7};
int p_cnt = 4;
int digitPrime[500000] = {0, 2};

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
int digit(int num)
{
	if(!isPrime(num))
		return 0;
	int a = 0;
	while(num != 0)
	{
		a += num % 10;
		num /= 10; 
	}
	//cout << a << " " << num << endl;
	return isPrime(a);
}
int getDigitPrime(int num)
{
	if(num == 2)
		return 1;
	if(num % 2 == 0)
		return digitPrime[num / 2 - 1];
	return digitPrime[num / 2];
}

int main()
{
	int n, t1, t2;
	for(int i = 11, j = 2; i <= 1000; i += j, j = 6 - j)
	{
		if(isPrime(i))
			p[p_cnt++] = i;
	}
	cout << digit(13) << endl;
	//cout << p_cnt << " " << p[p_cnt - 1] << endl;
	for(int i = 2; i < 500000; i++)
	{
		digitPrime[i] = digitPrime[i - 1] + digit(2 * i + 1);
	}
	for(int i = 0; i < 20; i++)
		cout << digitPrime[i] << " ";
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> t1 >> t2;
		cout << getDigitPrime(t2) - getDigitPrime(t1 - 1) << endl;
	}
	return 0;
}