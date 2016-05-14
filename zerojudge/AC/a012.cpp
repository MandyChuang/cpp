#include <iostream>
using namespace std;

int main()
{
	long long int h, a;

	while(cin >> h >> a)
	{
		if(h > a)
			cout << (h - a);
		else 
			cout << (a - h);
		cout << endl;
	}
	return 0;
}