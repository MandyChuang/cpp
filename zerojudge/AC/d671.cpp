#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	string password;
	int n;
	cin >> n;
	cin.ignore();
	while(n--)
	{
		getline(cin, password);
		int PWsqrt = sqrt(password.size());
		if(pow(PWsqrt, 2) != password.size())
			cout << "INVALID";
		else
		{
			int count = 0;
			for(int c = 0; c < PWsqrt; c++)
			{
				for(int r = 0; r < PWsqrt; r++)
				{
					cout << password[r * PWsqrt + c];
				}
			}
		}
		cout << endl;		
	}
	return 0;
}

// 123456789
// 147258369

// PWsqrt = 4, [1][1] = [1 * PWsqrt + 1]