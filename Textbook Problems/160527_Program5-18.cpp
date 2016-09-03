#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream fout;
	string name1, name2, name3;

	fout.open("Friends.txt");

	cin >> name1 >> name2 >> name3;

	fout << name1 << endl;
	fout << name2 << endl;
	fout << name3 << endl;
	cout << "The names were saved to a file.\n";
	
	fout.close();
	return 0;
}Joe