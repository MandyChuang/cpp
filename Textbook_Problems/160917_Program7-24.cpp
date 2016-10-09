#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	const int NUM_EMPLOYEES = 5;
	vector<int> hours(NUM_EMPLOYEES);
	vector<double> payRate(NUM_EMPLOYEES);
	int index;

	cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees and their hourly rates.\n";
	for(index = 0; index < NUM_EMPLOYEES; index++)
	{
		cout << "Hours worked by employees #" << (index + 1);
		cout << ": ";
		cin >> hours[index];
		cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
		cin >> payRate[index];
	}
	cout << fixed << showpoint << setprecision(2);
	for(index = 0; index < NUM_EMPLOYEES; index++)
	{
		double grossPay = hours[index] * payRate[index];
		cout << "Employee #" << (index + 1) << ": $" << grossPay << endl;
	}
	return 0;
}