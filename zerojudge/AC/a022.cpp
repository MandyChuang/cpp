#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while(cin >> s)
	{
		int len = s.length();
		bool isReverse = true;
		for(int i = 0; i < len/2; i++)
		{
			if(s[i] != s[len - i - 1])
			{
				isReverse = false;
				break;
			}
		}
		if(isReverse)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}

// 5
// 0 4
// 1 3
// 2 x

// 6
// 0 5
// 1 4
// 2 3