#include <iostream>
using namespace std;

int main()
{
	int nums[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
	string id;
	while(cin >> id)
	{
		int sum = 0;
		for(int i = 0; i < 8; i++)
		{
			sum += (id[i] - '0') * (8 - i);
			//cout << static_cast<int>(id[i] - '0') << ' ' << (8 - i) << ' ' << sum << endl;
		}
		sum += id[8] - '0';
		//cout << sum << endl;
		for(int i = 0; i < 26; i++)
		{
			if((sum + nums[i] / 10 + nums[i] % 10 * 9) % 10 == 0)
				cout << static_cast<char>('A' + i);
		}
		cout << endl;
	}
	return 0;
}

// 10 - (135 % 10) = 5

// (135 + 5) % 10 == 0
