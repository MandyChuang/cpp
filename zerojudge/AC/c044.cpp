#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int times, array[26] = {}, array2[26];
	string sen;
	
	for(int i = 0; i < 26; i++)
		array2[i] = i;

	cin >> times;
	getchar();
	for(int a = 0; a < times; a++)
	{
		getline(cin, sen);
		for(int n = 0; n < sen.length(); n++)
		{
			if(sen[n] >= 'A' && sen[n] <= 'Z')
				array[sen[n] - 'A'] += 1;
			else if(sen[n] >= 'a' && sen[n] <= 'z')
				array[sen[n] - 'a']++;
		}
	}
	// for(int n = 0; n < 26; n++)
	// {
	// 	cout << static_cast<char>(n + 'A') << array[n] << " ";
	// }
	for(int i = 25; i >= 0; i--)
	{
		for(int j = 0; j < i; j++)
		{
			if(array[j] < array[j + 1] || (array[j] == array[j + 1] && array2[j] > array2[j + 1]))
			{
				swap(array[j], array[j + 1]);
				swap(array2[j], array2[j + 1]);
			}
		}
	}
	for(int n = 0; n < 26 && array[n] > 0; n++)
	{
		if(array[n])
		cout << static_cast<char>(array2[n] + 'A') << " " << array[n] << endl;
	}
	return 0;
}