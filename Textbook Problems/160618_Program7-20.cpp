#include <iostream>
#include <iomanip>
using namespace std;

void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
	const int SIZE = 4;
	double testScores[SIZE], total, lowestScore, average;

	cout << fixed << showpoint << setprecision(1);

	getTestScores(testScores, SIZE);

	total = getTotal(testScores, SIZE);

	lowestScore = getLowest(testScores, SIZE);

	total -= lowestScore;

	average = total / (SIZE - 1);

	cout << "The average with the lowest score dropped is " << average << ".\n";

	return 0;
}

void getTestScores(double scores[], int size)
{
	int index;
	for(index = 0; index <= size - 1; index++)
	{
		cout << "Enter test score number " << (index + 1) << ": ";
		cin >> scores[index];
	}
}

double getTotal(const double numbers[], int size)
{
	double total = 0;
	for(int count = 0; count < size; count++)
		total += numbers[count];
	return total;
}

double getLowest(const double numbers[], int size)
{
	double lowest;

	lowest = numbers[0];
	for(int count = 1; count < size; count++)
	{
		if(numbers[count] < lowest)
			lowest = numbers[count];
	}
	return lowest;
}