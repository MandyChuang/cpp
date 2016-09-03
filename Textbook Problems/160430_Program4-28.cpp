#include <iostream>
using namespace std;

int main()
{
	// const double MIN_INCOME = 35000.0;
	// const int MIN_YEARS = 5;

	// cout << "What is your annual income? ";
	// double income;
	// cin >> income;

	// cout << "How many years have you worked at your current job? ";
	// int years;
	// cin >> years;

	// if (income >= MIN_INCOME || years > MIN_YEARS)
	// 	cout << "You qualify.\n";
	// else
	// {
	// 	cout << "You must earn at least $" << MIN_INCOME << " or have been employed more than " << MIN_YEARS << " years.\n";
	// }

	const double MIN_INCOME = 35000.0;
	const int MIN_YEARS = 5;

	cout << "What is your annual income? ";
	double income;
	cin >> income;

	if (income >= MIN_INCOME)
	{
		cout << "How many years have you worked at your current job? ";
		int years;
		cin >> years;

		if (years > MIN_YEARS)
			cout << "You qualify.\n";
		else
		{
			cout << "You must earn at least $" << MIN_INCOME << " or have been employed more than " << MIN_YEARS << " years.\n";
		}
	}
	else 
	{
		cout << "You must earn at least $" << MIN_INCOME << " to qualify.\n";
	}
	return 0;
}