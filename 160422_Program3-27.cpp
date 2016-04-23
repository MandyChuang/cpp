#include <iostream>
using namespace std;

int main()
{
	double num1, num2, num3, avg;  //? ? ? ?
	cout << "Enter the first number: "; //? ? ? ?
	cin >> num1; //10 ? ? ?
	cout << "Enter the second number: "; //10 ? ? ? 
	cin >> num2; //10 20 ? ?
	cout << "Enter the third number: "; //10 20 ? ?
	cin >> num3; //10 20 30 ?

	//avg = num1 + num2 + num3 / 3; //10 20 30 40
	avg = (num1 + num2 + num3) / 3; //10 20 30 20
	cout << "The average is " << avg << endl; // 10 20 30 20

	return 0;
}