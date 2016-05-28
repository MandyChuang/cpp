#include <iostream>
using namespace std;

int main()
{
	int t, a, b, ans;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		cin >> a >> b;
		if(a % 2 == 0)
		{
			a = a + 1;
		}
		if(b % 2 == 0)
		{
			b = b - 1;
		}
		ans = (a +b) * ((b - a) / 2 + 1) / 2 ;
		cout << "Case " << i << ": " << ans << endl;
	}
	return 0;
} 
