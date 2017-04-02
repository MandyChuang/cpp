#include <iostream>
#include <set>
using namespace std;

int main()
{
	int humble[5843] = {};
	set<int> pool{1};
	int num;
	for(int i = 1; i <= 5842; i++)
	{
		humble[i] = *pool.begin();
		pool.erase(pool.begin());
		if(humble[i] <= 1000000000)
			pool.insert(humble[i] * 2);
		if(humble[i] <= 666666667)
			pool.insert(humble[i] * 3);
		if(humble[i] <= 400000000)
			pool.insert(humble[i] * 5);
		if(humble[i] <= 285714286)
			pool.insert(humble[i] * 7);
		// cout << i << " " << humble[i] << " ; " << endl;
		// for(auto it = pool.begin(); it != pool.end(); it++)
		// {
		// 	cout << ' ' << *it;
		// }
		// cout << endl;
	}
	// cout << "fd" << endl;
	while(cin >> num)
	{
		if(num == 0)
			break;
		if(num / 10 % 10 == 1 || num % 10 < 1 || num % 10 > 3)
			cout << "The " << num << "th humble number is " << humble[num] << "." << endl;
		else if(num % 10 == 1)
			cout << "The " << num << "st humble number is " << humble[num] << "." << endl;
		else if(num % 10 == 2)
			cout << "The " << num << "nd humble number is " << humble[num] << "." << endl;
		else if(num % 10 == 3)
			cout << "The " << num << "rd humble number is " << humble[num] << "." << endl;
	}
	// ; 1
	// 1; 2 3 5 7
	// 1 2; 3 4 5 6 7 10 14
	// 1 2 3; 4 5 6 7 9 10 14 15 21
	// 
	return 0;
}