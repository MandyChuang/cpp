#include <iostream>
using namespace std;

int fn1(int y, int m, int d)
{
	for(int i = 0; i < y; i++)
	{
		d += ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) ? 366 : 365;
	}
	int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for(int i = 1; i < m; i++)
	{
		d += month[i];
	}
	if(((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) && m > 2)
		d += 1;
	return d;
}

int main()
{
	int y1, m1, d1, y2, m2, d2;
	while(cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2)
	{
		int diff = fn1(y1, m1, d1) - fn1(y2, m2, d2);
		if(diff < 0)
			diff = -diff;
		cout << diff << endl;
	}
	return 0;
}