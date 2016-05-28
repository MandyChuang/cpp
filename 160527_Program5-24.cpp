#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	string filename;
	int number;

	cin >> filename;

	fin.open(filename);

	if(fin)
	{
		while(fin >> number)
		{
			cout << number << endl;
		}
		fin.close();
	}
	else
	{
		cout << "Error opening the file.\n";
	}
	return 0;
}