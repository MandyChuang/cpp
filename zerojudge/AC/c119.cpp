#include <iostream>
using namespace std;

unsigned int big[1000] = {1};
unsigned int ans[1001] = {0, 1}; 

void multi(int n)
{
    // every int in big should multiply n
    for(int i = 0; i < 1000; i++)
    {
    	big[i] *= n;
    }
    // every int in big should be trim bya width 6,
    for(int i = 0; i < 999; i++)
    {
    	big[i + 1] += big[i] / 1000000;
    	big[i] %= 1000000;
    }
    // calculate sum of digits in big save to ans[n]
    for(int i = 0; i < 1000; i++)
    {
    	int a = big[i];
    	while(a > 0)
    	{
    		ans[n] += a % 10;
    		a /= 10;
    	}
    }
}

int main()
{
	int num;
	for(int i = 2; i < 1001; i++)
	{
		multi(i);
	}
	while(cin >> num)
	{
		cout << ans[num] << endl;
	}
	return 0;
}
