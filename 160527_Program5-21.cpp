#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout;
	int numberOfDays;
	double sales;

	cin >> numberOfDays;

	fout.open("Sales.txt");

	for(int count = 1; count <= numberOfDays; count++)
	{
		cout << "Enter the sales for day " << count << ": ";
		cin >> sales;

		fout1 << sales << endl;
	}
	fout.close();
	cout << "Data written to Sales.txt\n";
	return 0;
}