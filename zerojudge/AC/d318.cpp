#include <iostream>
#include <vector>
using namespace std;

vector<int> tento3(int n)
{
	vector<int> ans;
	while(n > 0)
	{
		ans.push_back(n % 3);
		n /= 3;
	}
	return ans;
}

int main()
{
	int n;
	while(cin >> n)
	{
		if(n < 0)
			break;
		else if(n == 0)
			cout << "0";
		vector<int> ans = tento3(n);
		auto rit = ans.rbegin();
		for(; rit != ans.rend(); ++rit)
		{
			cout << *rit;
		}
		cout << endl;
	}
	return 0;
}