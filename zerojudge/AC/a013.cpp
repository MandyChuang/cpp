#include <iostream>
#include <string>
using namespace std;

string dec2Roman (int num)
{
	if(num == 0)
		return "ZERO";
	string sa[] = 
	{
		"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX",
		"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC",
		"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM",
		"M", "MM", "MMM"
	};
	string sb = to_string(num); // 3, 9, 9, 9
	string ans = "";
	for(int i = 0; i < sb.size(); i++)
	{
		if(sb[i] == '0')
			continue;
		ans += sa[(sb.size() - i - 1) * 9 + (sb[i] - '0') - 1];
	}
	return ans;
}
int roman2Dec(string roman)
{
	string sa = "IVXLCDM";
	int sb[] = {1, 5, 10, 50, 100, 500, 1000};
	int ans = 0;
	int rn[20] = {};
	for(int i = 0; i < roman.size(); i++)
	{
		for(int j = 0; j < 7; j++)
		{
			if(roman[i] == sa[j])
			{
				rn[i] = sb[j];
				break;
			}
		} 
	}
	// for(int i = 0; i < 20; i++)
	// 	cout << rn[i] << endl;
	for(int i = 0; i < roman.size(); i++)
	{
		ans += rn[i];
		if(i > 0 && rn[i] > rn[i - 1])
			ans -= 2 * rn[i - 1];
	}
	return ans;
}
int main()
{
	string n1, n2;
	while(cin >> n1)
	{
		if(n1 == "#")
			break;
		cin >> n2;
		int a = roman2Dec(n1) - roman2Dec(n2);
		if(a < 0)
			a = -a;
		cout << dec2Roman(a) << endl;
	}
	return 0;
}
// int main()
// {
// 	cout << roman2Dec("XXXI") << " " << roman2Dec("I");
// }

// MCMXCVIII
// 1000, 100, 1000, 10, 100, 5, 1, 1, 1

