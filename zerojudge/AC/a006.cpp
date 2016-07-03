#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c, d;
	while(cin >> a >> b >> c)
	{
		d = (b * b) - 4 * a * c;
		if(d == 0)
			cout << "Two same roots x=" << -b / (2 * a) << endl;
		else if(d < 0)
			cout << "No real root" << endl;
		else {
			double tmp = sqrt(d);
			cout << "Two different roots x1=" << (-b + tmp) / (2 * a) << " , x2=" << (-b - tmp) / (2 * a) << endl;
		}
	}
	return 0;
}