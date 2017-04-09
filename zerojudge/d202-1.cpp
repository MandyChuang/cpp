#include <iostream>
using namespace std;

#define BASE 100000000
int main()
{
	string a, b;   
	size_t found;
	while(cin >> a >> b)
	{
		int x[25] = {}, y[25] = {}; // 整數，小數
		found = a.find('.');
		if(found != string::npos)
		{
			for(int i = 0; i < found; i++)
			{
				int s = (found - i - 1) / 8;
				x[s] *= 10;
				x[s] += a[i] - '0';
			}
			for(int i = found + 1; i < a.size(); i++)
			{
				int t = (i - found - 1) / 8;
				y[t] *= 10;
				y[t] += a[i] - '0';
			}
		}
		int w[25], z[25]; // 整數，小數
		found = b.find('.');
		if(found != string::npos)
		{
			for(int i = 0; i < found; i++)
			{
				int s = (found - i - 1) / 8;
				w[s] *= 10;
				w[s] += b[i] - '0';
			}
			for(int i = found + 1; i < b.size(); i++)
			{
				int t = (i - found - 1) / 8;
				z[t] *= 10;
				z[t] += b[i] - '0';
			}
		}
		for(int i = 24; i >= 0; i--)
		{
			y[i] += z[i];
			if(y[i] >= BASE && i != 0)
			{
				y[i - 1] += 1;
				y[i] -= BASE;
			}
			else if(y[i] >= BASE && i == 0)
			{
				x[0]++;
				y[i] -= BASE;
			}
		}
		for(int i = 0; i < 25; i++)
		{
			x[i] += w[i];
			if(x[i] >= BASE && i != 24)
			{
				x[i + 1] += 1;
				x[i] -= BASE;
			}
		}
		for(int i = 25; i >=0; i--)
		{
			if(x[i] != 0)
				cout << x[i];
		}
		cout << ".";
		for(int i = 0; i < 25;i++)
		{
			cout << y[i];
		}
		cout << endl;
	}
	return 0;
}

// 0
// 98765432, 19876543, 21987654, 321
// i = 0, found = 27, 3
// i = 1, found = 27, 3
// i = 2, found = 27, 3
// i = 3, found = 27, 2
//