// gcd(12,15) = gcd(15,12) = gcd(12,3) = gcd(3,0) = 3
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

int main()
{
	int a, b;
	while(cin >> a >> b)
		cout << gcd(a, b) << endl;
	return 0;
}
