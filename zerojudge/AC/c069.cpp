#include <iostream>
#include <string>
using namespace std;

string month[] = {"January", "February", "March", "Apirl", "May", "June", "July", "August", "September", "October", "November", "December"};
int day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string week[] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
int leap(int y)
{
	if(y <= 1752)
		return (y % 4 == 0);
	else
		return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}

int total(int m, int d, int y)
{
	int total = 0;
	for(int i = 0; i < y; i++)
		total += leap(i) ? 366 : 365;
	for(int i = 0; i < m; i++)
		total += day[i];
	if(leap(y) && m > 2)
		total += 1;
	if(y > 1752 || (y == 1752 && m > 9) || (y == 1752 && m == 9 && d > 13))
		total -= 11;
	total += d;
	return total;
}

int main()
{
	int m, d, y;
	while(cin >> m >> d >> y)
	{
		if(m == 0 && d == 0 && y == 0)
			break;
		if(d > day[m] || (y == 1752 && m == 9 && d > 2 && d < 14))
		{
			cout << m << "/" << d << "/" << y << " is an invalid date." << endl;
			continue;
		}
		cout << month[m - 1] << " " << d << ", " << y << " is a " << week[total(m, d, y) % 7] << endl;
	}
	return 0;
}