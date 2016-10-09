#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	vector<int> hours;
	vector<double> payRate;
	int numEmployees;
	int index;

	cout << "How many employees do you have? ";
	cin >> numEmployees;

	cout << "Enter the hour worked by " << numEmployees << " employees and their hourly rates.\n";
	for(index = 0; index < numEmployees; index++)
	{
		int tempHours;
		double tempRate;
		cout << "Hours worked by employee #" << index + 1 << ": ";
		cin >> tempHours;
		hours.push_back(tempHours);
		cout << "Hourly pay rate for employee #" << index + 1 << ": ";
		cin >> tempRate;
		payRate.push_back(tempRate);
	}

	cout << "Here is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);
	for(index = 0; index < numEmployees; index++)
	{
		double grossPay = hours[index] * payRate[index];
		cout << "Employee #" << index + 1 << ": $" << grossPay << endl;
	}
	return 0;
}