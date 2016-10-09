#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	int value1, value2, value3, sum;

	fin.open ("NumbericData.txt");

	fin >> value1;
	fin >> value2;
	fin >> value3;

	fin.close();

	sum = value1 + value2 + value3;

	cout << "Here are the numbers:\n" << value1 << " " << value2 << " " << value3 << endl;

	cout << "Theie sum is: " << sum << endl;
	return 0;
}