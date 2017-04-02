#include <iostream>
#include <cstring>
using namespace std;

int sudoku[9][9];

bool isSudoku()
{
	int row[10] = {};
	for(int i = 0; i < 9; i++)
	{
		memset(row, 0, sizeof(row));
		for(int j = 0; j < 9; j++)
		{
			row[sudoku[i][j]]++;
			if(row[sudoku[i][j]] > 1)
				return false;
		}
		memset(row, 0, sizeof(row));
		for(int j = 0; j < 9; j++)
		{
			row[sudoku[j][i]]++;
			if(row[sudoku[j][i]] > 1)
				return false;
		}
		memset(row, 0, sizeof(row));
		for(int j = 0; j < 9; j++)
		{
			row[sudoku[i / 3 * 3 + j / 3][i % 3 * 3 + j % 3]]++;
			if(row[sudoku[i / 3 * 3 + j / 3][i % 3 * 3 + j % 3]] > 1)
				return false;
		}
	}
	return true;
}

// 0 0,0
// 1 0,3
// 2 0,6
// 3 3,0
// 4 3,3
// 5 3,6
// 6 6,0
// 7 6,3
// 8 6,6

// [ i/3*3 + j/3 ][ i%3*3 + j%3 ]

int main()
{
	while(cin >> sudoku[0][0])
	{
		for(int i = 0; i < 9; i++)
		{
			for(int j = 0; j < 9; j++)
			{
				if(i == 0 && j == 0)
					continue;
				cin >> sudoku[i][j];
			}
		}
		if(isSudoku())
			cout << "yes" << endl;
		else
			cout << "no" << endl;
		cout << endl;
	}
	return 0;
}