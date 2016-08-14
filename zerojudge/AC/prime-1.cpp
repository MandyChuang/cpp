#include <iostream>
#include <cmath>
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

int main()
{
	int num;

	for(int i = 11, j = 2; i <= 46341; i += j, j = 6 - j)
	{
		if(prime(i))
		{
			p[p_cnt++] = i;
		}
	}

	while(cin >> num)
	{
		if(prime(num))
			cout << "質數" << endl;
		else
			cout << "非質數" << endl;
	}
	//cout << p_cnt << " " << p[p_cnt - 1] << endl;
	return 0;
}
