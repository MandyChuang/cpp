#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream fin;
	string name;
	fin.open("Friends.txt");
	cout << "Reading data from the file.\n";

	for(int i = 0; i < 3; i++)
	{
		fin >> name;
		cout << name << endl;
	}
	fin.close();
	return 0;
}