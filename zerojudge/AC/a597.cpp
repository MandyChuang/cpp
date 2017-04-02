#include <iostream>
#include <stack>
using namespace std;

struct Point 
{
	int m, n, step;
};
Point pstack[250000];
int stackcount = 0;
char map[500][501];

void mapdebug(char map[][501], int m)
{
	for(int i = 0; i < m; i++)
	{
		cout << map[i] << endl;
	}
}

int area(char map[][501], int m, int n, Point start)
{
	int offset[][2] = {
		{1, 0},
		{-1, 0},
		{0, 1},
		{0, -1}
	};
	int area = 0;
	pstack[stackcount++] = start; // push
	//cout << m << " " << map[0];
	while(stackcount > 0)
	{
		Point t = pstack[--stackcount]; // pop
		//cout << t.m << " " << t.n << " " << t.step << endl;
		if(t.m < 0 || t.m >= m)
			continue;
		if(t.n < 0 || t.n >= n)
			continue;
		if(map[t.m][t.n] == 'X')
			continue;
		if(map[t.m][t.n] == '.')
			continue;
		map[t.m][t.n] = '.';
		area++;
		for(int i = 0; i < 4; i++)
		{
			Point s{t.m + offset[i][0], t.n + offset[i][1], t.step + 1};
			pstack[stackcount++] = s; // push
		}
		//mapdebug(map, m);
	}
	return area;
}

int main()
{
	int m, n;
	while(cin >> m >> n)
	{
		// cin.ignore(); 
		int num = 0;
		int largest = 0, temp;
		for(int i = 0; i < m; i++)
		{
			scanf(" %s", map[i]);
		}
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(map[i][j] == 'J')
				{
					Point start{i, j, 0};
					num++;
					temp = area(map, m, n, start);
					if(temp > largest)
						largest = temp;
				}
			}
		}
		cout << num << " " << largest << endl;
	}
	return 0;
}