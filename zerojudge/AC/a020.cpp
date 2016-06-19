#include <iostream>
using namespace std;

int main()
{
	int nums[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
	string id;
	while(cin >> id) // T112663836
	{
		int checkSum = nums[id[0] - 'A'] / 10 + nums[id[0]- 'A'] % 10 * 9;
		for(int i = 1; i < 9; i++)
		{
			//cout << (id[i] - '0') * (9 - i) << endl;
			checkSum += (id[i] - '0') * (9 - i);
		}
		checkSum += (id[9] - '0');
		if(checkSum % 10 == 0)
			cout << "real" << endl;
		else
			cout << "fake" << endl;
		//cout << checkSum;
	}
	return 0;
}