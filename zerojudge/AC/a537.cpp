#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int p[1000] = {2, 3, 5, 7};
int p_cnt = 4;

bool isPrime(int num)
{
	if(num < 2)
		return false;
	int max = sqrt(num);
	for(int i = 0; i < p_cnt && p[i] <= max; i++)
	{
		if(num % p[i] == 0)
			return false;
	}
	return true;
}

int main()
{
	int times;
	string testInput;

	for(int i = 11, j = 2; i <= 1000; i += j, j = 6 - j)
	{
		if(isPrime(i))
			p[p_cnt++] = i;
	}

	cin >> times;
	getchar();
	for(int i = 0; i < times; i++)
	{
		int alphabet[62] = {};
		getline(cin, testInput);
		cout << "Case " << i + 1 << ": ";
		for(int j = 0; j < testInput.length(); j++)
		{
			if(testInput[j] >= '0' && testInput[j] <= '9')
				alphabet[testInput[j] - '0'] += 1;
			else if(testInput[j] >= 'A' && testInput[j] <= 'Z')
				alphabet[testInput[j] - 'A' + 10] += 1;
			else if(testInput[j] >= 'a' && testInput[j] <= 'z')
				alphabet[testInput[j] - 'a' + 36] += 1;
		}
		// for(int j = 0; j < 62; j++)
		// {
		// 	cout << j << " " << alphabet[j] << endl;
		// }
		// for(int j = 0; j < 5; j++)
		// {
		// 	cout << isPrime(j) << endl;
		// }
		bool output = true;
		for(int j = 0; j < 10; j++)
		{
			if(isPrime(alphabet[j]))
			{
				cout << j;
				output = false;
			}
		}
		for(int j = 0; j < 26; j++)
		{
			if(isPrime(alphabet[j + 10]))
			{
				cout << static_cast<char>(j + 'A');
				output = false;
			}
		}
		for(int j = 0; j < 26; j++)
		{
			if(isPrime(alphabet[j + 36]))
			{
				cout << static_cast<char>(j + 'a');
				output = false;
			}
		}
		if(output) 
			cout << "empty";
		cout << endl;
	}
	return 0;
}