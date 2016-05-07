#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numStudents, numTests;
	double total, average;

	cout << fixed << showpoint << setprecision(1);

	cout << "Students?";
	cin >> numStudents;
	cout << "Test scores?";
	cin >> numTests;

	for (int student = 1; student <= numStudents; student++)
	{
		total = 0;
		for (int test = 1; test <= numTests; test++)
		{
			double score;
			cout << "Enter score " << test << " for student " << student << ": ";
			cin >> score;
			total += score; 
		}
		average = total / numTests;
		cout << "The average score for student " << student << " is " << average << ".\n\n";
	}
	return 0;
}