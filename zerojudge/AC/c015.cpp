#include <iostream>
using namespace std;

int main()
{
	int t, num, num1, reversed, ans, count;
	
	for(cin >> t; t > 0; t--) // 5 4 3 2 1 0
	{
		cin >> num;
		count = 0;
		while(true)
		{
			reversed = 0;
			num1 = num;
			while(num1 != 0)
			{
				reversed = reversed * 10 + num1 % 10;
				num1 = num1/10;
			}
			if (num == reversed && count > 0)
			{
				cout << count << " " << reversed << endl;
				break;
			}
			else
			{
				count++;
				num += reversed;
			}
		}
	}
	return 0;
}