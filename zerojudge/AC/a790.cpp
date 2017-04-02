#include <iostream>d
using namespace std;

struct Point 
{
	int i, j, step;
};

void debug(Point p)
{
	cout << "(" << p.i << ", " << p.j << ") " << p.step << endl;
}

bool isExtinguished(string map[], int height)
{
	for(int i = 0; i < height; i++)
	{
		for(int j = 0; j < map[i].size(); j++)
		{
			if(map[i][j] == 'F')
				return false;
		}
	}
	return true;
}

int main()
{
	int height, width, pipe;
	while(cin >> width >> height >> pipe)
	{
		cin.ignore();
		queue<Point> myqueue;
		string map[100];
		for(int i = 0; i < height; i++)
		{
			getline(cin, map[i]);
			for(int j = 0; j < width; j++)
			{
				if(map[i][j] == 'S')
				{
					Point start{i, j, 0};
					myqueue.push(start);
				}
			}
		}
		int offset[][2] = {
			{1, 0},
			{-1, 0},
			{0, 1},
			{0, -1}
		};
		while(!myqueue.empty())
		{
			Point t = myqueue.front();
			// debug(t);
			myqueue.pop(); // remove the first element
			// not over the range
			if(t.i < 0 || t.i >= height)
				continue;
			if(t.j < 0 || t.j >= width)
				continue;
			// not on the wall
			if(map[t.i][t.j] == '#')
				continue;
			// never process the point twice
			if(map[t.i][t.j] == '.')
				continue;
			// not over the length of the pipe
			if(t.step >= pipe)
				continue;
			map[t.i][t.j] = '.';
			for(int i = 0; i < 4; i++)
			{
				Point n{t.i + offset[i][0], t.j + offset[i][1], t.step + 1};
				myqueue.push(n);
			}
		}
		for(int i = 0; i < height; i++)
		{
			cout << map[i] << endl;
		}
		if(isExtinguished(map, height))
			cout << "All Fires Extinguished!" << endl;
	}
	return 0;
}