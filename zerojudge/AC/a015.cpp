#include <iostream>
using namespace std;

int main()
{
	int a[100][100];
	int row, column;
	while(cin >> row >> column) // 2 3
	{
		for(int i = 0; i < row; i++)
		{
			for(int j = 0; j < column; j++)
			{
				cin >> a[i][j];
			}
		}
		for(int j = 0; j < column; j++)
		{
			for(int i = 0; i < row; i++)
				cout << a[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
}

// 0 0
// 0 1
// 0 2
// 1 0
// 1 1
// 1 2

// cout

// 0 0
// 1 0
// 0 1
// 1 1
// 0 2
// 1 2