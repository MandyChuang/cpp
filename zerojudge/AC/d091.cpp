#include <iostream>
using namespace std;

int main()
{
	double rectangle[10][4], point[2];
	char r;
	int rect_length = 0, pointno = 1, isOutOfFigure = true;
	while(true)
	{
		cin >> r; // r
		if(r == '*')
		{
			break;
		}
		for(int i = 0; i < 4; i++)
		{
			cin >> rectangle[rect_length][i]; // 8.5 17.0 25.5 -8.5
		}
		rect_length++;
	}
	// for(int i = 0; i < rect_length; i++)
	// {
	// 	for(int j = 0; j < 4; j++)
	// 		cout << rectangle[i][j] << " ";
	// 	cout << endl;
	// }
	while(true)
	{
		cin >> point[0] >> point[1];
		isOutOfFigure = true;
		if(point[0] == 9999.9 && point[1] == 9999.9)
			break;
		for(int i = 0; i < rect_length; i++)
		{
			if(point[0] > rectangle[i][0] && point[0] < rectangle[i][2] && point[1] < rectangle[i][1] && point[1] > rectangle[i][3])
			{
				cout << "Point " << pointno << " is contained in figure " << i + 1 << endl;
				isOutOfFigure = false;
			}
		}
		if(isOutOfFigure)
		{
			cout << "Point " << pointno << " is not contained in any figure" << endl;
		}
		pointno++;
	}
	return 0;
}