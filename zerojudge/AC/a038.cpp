#include <iostream>
using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		int ans = 0;
		while (num != 0)
		{
			ans = ans * 10 + num % 10;
			num = num/10;
			//cout << ans << " " << num << endl;
		}
		cout << ans << endl;
	}
	return 0;
}