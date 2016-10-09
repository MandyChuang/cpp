#include <iostream>
using namespace std;

void doubleNum(int &);
void getNum(int &);

int main()
{
	int value;

	getNum(value);

	doubleNum(value);

	cout << "That value doubled is " << value << endl;
	return 0;
}

void getNum(int &userNum)
{
	cout << "Enter a number: ";
	cin >> userNum;
}

void doubleNum(int &refVar)
{
	refVar *= 2;
}