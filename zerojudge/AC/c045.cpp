#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s[100];
	int rows = 0, columns = 0;
	while(getline(cin, s[rows]))
		rows++;
	for(int i = 0; i < rows; i++)
		if(columns < s[i].length())
			columns = s[i].length();
	for(int i = 0; i < columns; i++)
	{
		for(int j = rows - 1; j >= 0; j--)
		{
			if(i >= s[j].length())
				cout << " ";
			else
				cout << s[j][i];
		}
		cout << endl;
	}
	// cout<<rows << " " << columns <<endl;
	return 0;
}