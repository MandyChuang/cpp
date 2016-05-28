#include <iostream>
using namespace std;

int main()
{
	int t, s, d;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		cin >> s >> d;
 		if(s < d || (s + d) % 2 != 0)
 		{
 			cout << "impossible" << endl;
 		}
 		else
 		{
			int x = (s + d) / 2;
			int y = (s - d) / 2;
			cout << x << " " << y << endl;
		}
	}
	return 0;
}