#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double day1, day2, day3, total;

	cin >> day1 >> day2 >> day3;

	total = day1 + day2 + day3;

	cout << "\nSales Figures\n";
	cout << "-------------\n";
	cout << setprecision(2) << fixed;
	cout << "Day 1: " << setw(8) << day1 << endl;
	cout << "Day 2: " << setw(8) << day2 << endl;
	cout << setprecision(3) << fixed;
	cout << "Day 3: " << setw(8) << day3 << endl;
	cout << "Total: " << setw(8) << total << endl;
	return 0;
}