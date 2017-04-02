#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		if(n == 0)
			break;
		int sqrtn = sqrt(n);
		if(n / sqrtn == sqrt(n))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}