#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout;
	int number1, number2, number3;

	fout.open("Numbers.txt");

	cin >> number1 >> number2 >> number3;

	fout << number1 << endl;
	fout << number2 << endl;
	fout << number3 << endl;
	cout << "The numbers were saved to a file.\n";

	fout.close();
	cout << "Done.\n";
	return 0;
}