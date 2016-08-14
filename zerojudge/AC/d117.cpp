#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int p[1000] = {2, 3, 5, 7};
int p_cnt = 4;

bool isPrime(int num)
{
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
	string word;

	for(int i = 11, j = 2; i <= 1000; i += j, j = 6 - j)
	{
		if(isPrime(i))
			p[p_cnt++] = i;
	}
	// for(int i = 0; i < 25; i++)
	// 	cout << p[i] << " ";
	// int n = 0;
	while(cin >> word)
	{
		// n++;
		// if(n == 69)
		// 	cout << word << endl;
		int sum = 0;
		for(int i = 0; i < word.length(); i++)
		{
			if(word[i] >= 'A' && word[i] <= 'Z')
				sum += (word[i] - 'A' + 27);
			else if(word[i] >= 'a' && word[i] <='z')
				sum += (word[i] - 'a' + 1);
		}
		//cout << sum << endl;
		if(sum == 1 || isPrime(sum))
			cout << "It is a prime word." << endl;
		else
			cout << "It is not a prime word." << endl;
	}
	return 0;
}