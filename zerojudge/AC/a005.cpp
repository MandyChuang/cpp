#include <iostream>
using namespace std;

int main()
{
	int t, num1, num2, num3, num4, num5;
	cin >> t;
	while(t--)
	{
		cin >> num1 >> num2 >> num3 >> num4;

		if (num2-num1 == num3-num2 && num3-num2 == num4-num3)
		{
			num5 = num4 + (num2 - num1);
			cout << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << endl;
		}
		else //if (num2/num1 == num3/num2 && num3/num2 == num4/num3)
		{
			num5 = num4 * (num2 / num1);
			cout << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << endl;
		}
	}
	return 0;
}