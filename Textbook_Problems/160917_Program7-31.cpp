#include <iostream>
#include <vector>
using namespace std;

double avgVector(vector<int>);
int main()
{
	vector<int> values;
	int numValues;
	double average;

	cout << "How many values do you wish to average? ";
	cin >> numValues;

	for(int count = 0; count < numValues; count++)
	{
		int tempValues;
		cout << "Enter a value: ";
		cin >> tempValues;
		values.push_back(tempValues);
	}

	average = avgVector(values);
	cout << "Average: " << average << endl;
	return 0;
}

double avgVector(vector<int> vect)
{
	int total = 0;
	double avg;
	if(vect.empty())
	{
		cout << "No values to average.\n";
		avg = 0.0;
	}
	else
	{
		for(int count = 0; count < vect.size(); count++)
			total += vect[count];
		avg = total / vect.size();
	}
	return avg;
}