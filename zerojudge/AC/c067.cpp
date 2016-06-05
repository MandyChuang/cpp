#include <iostream>
using namespace std;

int main()
{
	int n, h[50], i, average, ans, set = 0;
	while(cin >> n)
	{
		average = 0;
		ans = 0;
		if(n == 0)
			break;
		for(i = 0; i < n; i++) 
		{
			cin >> h[i];
			average += h[i];
		}
		average /= n;
		for(i = 0; i < n; i++)
		{
			if(h[i] > average)
				ans += h[i] - average;
		}
		cout << "Set #" << ++set << endl;
		cout << "The minimum number of moves is " << ans << "." << endl << endl;
	}
	return 0;
}