#include <iostream>
using namespace std;

int main()
{
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];

	cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees: ";
	cin >> hours[0] >> hours[1] >> hours[2] >> hours[3] >> hours[4] >> hours[5];

	cout << "The hours you entered are:";
	cout << " " << hours[0] << " " << hours[1] << " " << hours[2] << " " << hours[3] << " " << hours[4] << " " << hours[5] << endl;
	return 0;
}