#include <iostream>
#include <cstdio>
using namespace std;

int password[4], guess[4];
int A, B;

// void debug()
// {
// 	cout<<"password: ";
// 	for(int i = 0; i < 4; i++)
// 		cout<<password[i]<<' ';
// 	cout<<endl<<"guess: ";
// 	for(int i = 0; i < 4; i++)
// 		cout<<guess[i]<<' ';
// 	cout<<endl<<A<<'A'<<B<<'B'<<endl;
// }

int main()
{
	while( scanf(" %d", &password[0]) != EOF ) // End of File
	{
		for(int i = 1; i < 4; i++)
		{
			scanf(" %d", &password[i]);
		}
		// debug()
		int times;
		scanf(" %d", &times);
		for(int t = 0; t < times; t++)
		{
			for(int i = 0; i < 4; i++)
			{
				//cin >> guess[i];
				scanf(" %d", &guess[i]);
			}
			// debug();
			// for(int j = 0; j < 4; j++)
			//  	cout << password[j] << " " << guess[j] << endl;
			A = 0;
			B = 0;
			for(int i = 0; i < 4; i++)
			{
				if(password[i] == guess[i])
				{
					password[i] += 10;
					guess[i] += 10;
					A++;
				}
				// debug();
			}
			// for(int j = 0; j < 4; j++)
			//  	cout << password[j] << " " << guess[j] << endl;
			for(int i = 0; i < 4; i++)
			{
				if(password[i] >= 10)
					continue;
				for(int j = 0; j < 4; j++)
				{
					if(guess[j] >= 10)
						continue;
					if(password[i] == guess[j])
					{
						password[i] += 10;
						guess[j] += 10;
						B++;
					}
					//cout << "i: " << i << " j: " << j << endl;
					//debug();
				}
			}
			//cout << A << "A" << B << "B" << endl;
			printf("%dA%dB\n", A, B); // no need &
			for(int i = 0; i < 4; i++)
			{
				if(password[i] >= 10)
					password[i] -= 10;
			}
		}
	}
	return 0;
}
// 1234 1145
// x234 x145 1A0B
// x23x x1x5 1A1B

// 1234 1243
// xx34 xx43 2A0B
// xxxx xxxx 2A2B

// 1115 1111
// xxx5 xxx1 3A0B
// 1115 1251
// x115 x251 1A0B
// xx1x x2xx 1A2B