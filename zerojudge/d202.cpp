#include <iostream>
using namespace std;

void Reverse(string &a)
{
	int b = a.size() - 1;
	for(int i = 0; i < a.size() / 2; i++)
		swap(a[i], a[b - i]);
}

int main()
{
	string a1, a2, b1, b2;
	while(getline(cin, a1, '.'))
	{
		cin >> a2;
		cin.ignore();
		getline(cin, b1, '.');
		cin >> b2;
		cin.ignore();
		for(int i = 0; i < a1.size(); i++)
			a1[i] -= '0';
		for(int i = 0; i < a2.size(); i++)
			a2[i] -= '0';
		for(int i = 0; i < b1.size(); i++)
			b1[i] -= '0';
		for(int i = 0; i < b2.size(); i++)
			b2[i] -= '0';

		int decimalsize = a2.size();
		if(a2.size() < b2.size())
		{
			decimalsize = b2.size();
			a2.resize(b2.size(), 0);
		}
		else if(a2.size() > b2.size())
			b2.resize(a2.size(), 0);
		for(int i = 0; i < decimalsize; i++)
			a2[i] += b2[i];
		for(int i = decimalsize; i >= 0; i--)
		{
			if(a2[i] > 9 && i != 0)
			{
				a2[i - 1]++;
				a2[i] -= 10;
			}
			if(i == 0 && a2[i] > 9)
			{
				a1[a1.size() - 1]++;
				a2[i] -= 10;
			}
		}
		if(decimalsize > 200 && a2[200] >= 5)
			a2[199]++;
		a2.resize(200, 0);

		Reverse(a1);
		Reverse(b1);
		int integersize = a1.size();
		if(a1.size() < b1.size())
		{
			integersize = b1.size();
			a1.resize(b1.size(), 0);
		}
		else if (a1.size() > b1.size())
			b1.resize(a1.size(), 0);
		for(int i = 0; i < integersize; i++)
		{
			a1[i] += b1[i];
			if(a1[i] > 9 && i != integersize - 1)
			{
				a1[i + 1]++;
				a1[i] -= 10;
			}
			else if (i == integersize - 1 && a1[i] > 9)
			{
				a1.resize(integersize + 1, 1);
				a1[i] -= 10;
			}
		}
		Reverse(a1);

		for(int i = 0; i < a1.size(); i++)
			a1[i] += '0';
		for(int i = 0; i < a2.size(); i++)
			a2[i] += '0';
		for(int i = 0; i < b1.size(); i++)
			b1[i] += '0';
		for(int i = 0; i < b2.size(); i++)
			b2[i] += '0';

		cout << a1 << "." << a2 << endl;
	}
	return 0;
}