#include <iostream>
#include <queue>
using namespace std;

struct Point {
	int i, j, k, step;
};

void debugPoint(Point p)
{
	cout << "(" << p.i << ", " << p.j << ", " << p.k << ") " << p.step << " ";
}

int main()
{
	int L, R, C;
	string castle[30][30];
	int step[30][30][30];
	while(cin >> L >> R >> C)
	{
		Point start;
		queue<Point> myqueue;
		if(L + R + C == 0)
			break;
		for(int i = 0; i < L; i++)
		{
			for(int j = 0; j < R; j++)
			{	
				cin >> castle[i][j];
				for(int k = 0; k < C; k++)
				{
					step[i][j][k] = -1;
					if(castle[i][j][k] == 'S')
					{
						start.i = i;
						start.j = j;
						start.k = k;
						start.step = 0;
					}
				}
			}
		}
		// debugPoint(start);
		myqueue.push(start);
		Point t;
		int offset[][3] = {
			{1, 0, 0},
			{-1, 0, 0},
			{0, 1, 0},
			{0, -1, 0},
			{0, 0, 1},
			{0, 0, -1},
		};
		while(!myqueue.empty())
		{
			t = myqueue.front(); // the first in line
			// debugPoint(t);
			myqueue.pop();
			if(t.i < 0 || t.i >= L)
				continue;
			if(t.j < 0 || t.j >= R)
				continue;
			if(t.k < 0 || t.k >= C)
				continue;
			if(castle[t.i][t.j][t.k] == '#')
				continue;
			if(step[t.i][t.j][t.k] != -1)
				continue;
			if(castle[t.i][t.j][t.k] == 'E')
				break;
			step[t.i][t.j][t.k] = t.step;
			for(int i=0; i<6; i++) 
			{
				Point n { t.i + offset[i][0], t.j + offset[i][1], t.k + offset[i][2], t.step + 1 };
				myqueue.push(n);
			}
		}
		// debugPoint(t);
		if(castle[t.i][t.j][t.k] == 'E')
			cout << "Escaped in " << t.step << " minute(s)." << endl;
		else
			cout << "Trapped!" << endl;

		// for(int i = 0; i < L; i++)
		// {
		// 	for(int j = 0; j < R; j++)
		// 	{	
		// 		cout << castle[i][j] << endl;
		// 	}
		// 	cout << endl;
		// }
		
	}
	return 0;
}