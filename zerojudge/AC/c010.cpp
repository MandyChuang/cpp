#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> n;
	vector<int>::iterator it;
	int num;
	while(cin >> num)
	{
		for(it = n.begin(); it != n.end() && *it < num; it++)
			;
		n.insert(it, num);
		// for(it = n.begin(); it < n.end(); it++)
		// 	cout << ' ' << *it;
		// cout << endl;
		// 1 3 4 60 70, num = 50
		// it = 0, *it = 1
		// it = 1, *it = 3
		// it = 2, *it = 4
		// it = 3, *it = 60
		// break
		if(n.size() % 2 == 0)
			cout << (n[n.size() / 2 - 1] + n[n.size() / 2]) / 2 << endl;
		else
			cout << n[n.size() / 2] << endl;
	}
	return 0;
}