#include <iostream>
#include <cmath>
using namespace std;

int p[100000] = {2, 3, 5, 7};
int p_cnt = 4;

bool isPrime(int num)
{
	int max = sqrt(num);
	for(int i = 0; i < p_cnt && p[i]<=max; i++)
		if(num%p[i]==0)
			return false;
	return true;
}

int main()
{
	// 11, 13, 17, 19
	// 6n+1, 6n+5
	for(int i = 11, j = 2; i < 10000; i += j, j = 6 - j)
		if(isPrime(i))
			p[p_cnt++] = i;

	cout << p_cnt << " " << p[p_cnt-1] << endl;
	return 0;
}