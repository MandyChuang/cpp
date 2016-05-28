// gcd(12,15) = gcd(15,12) = gcd(12,3) = gcd(3,0) = 3
//     a1 b1        a2 b2

// 12   15
// 12    3
// 0     3
// = 3
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	while(cin >> a >> b)
	{
		while(b > 0)
		{
			c = b;// 3 0 0
			b = a % b; // 12 0 3
			a = c; // 3 0 3
		}
		cout << a << endl;
	}
	return 0;
}