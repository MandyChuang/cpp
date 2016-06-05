
// 123 456  a % 10 + b % 10
// 555 555
// 123 594
// 9999 1
// 0 0

// 909 1
// 910

// 9 1 c=0
// if(a % 10 + b % 10 + c > 9) c = 1, count++
// else c=0
// a /= 10
// b /= 10

// 9 0 c=1
// 9 0 c=1
// 9 0 c=1
// 0 0 c=1

// No carry operation.
// 3 carry operations.
// 1 carry operation.

#include <iostream>
using namespace std;

int main()
{
	int a, b, a1, b1, c, count;
	
	while(cin >> a >> b)
	{
		count = 0; // carry operation count
		c = 0; // last carry
		if(a == 0 && b == 0)
			break;
		while(a + b + c != 0)
		{
			// new carry is (a%10 + b%10 + last carry) large than 10 or not
			c = (a%10 + b%10 + c) > 9;
			if(c) // carry operation occured
				count++;
			// remove smallest digit
			a /= 10;
			b /= 10;
		}
		if(count == 0)
			cout << "No carry operation." << endl;
		else if(count == 1)
			cout << count << " carry operation." << endl;
		else
			cout << count << " carry operations." << endl;
	}
	return 0;
}