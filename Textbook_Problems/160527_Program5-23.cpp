#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	int number;

	fin.open("BadListOfNumbers.txt");

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