#include <iostream>
using namespace std;

int main()
{
	char employed,recentGrad;

	cout << "Answer the following questions with either Y for yes or N for no.\n";
	cin >> employed;
	cin >> recentGrad;

	// if (employed == 'Y')
	// {
	// 	if (recentGrad == 'Y')
	// 	{
	// 		cout << "You qualify for the special interest rate.\n";
	// 	}
	// 	else
	// 	{
	// 		cout << "You must have graduated from college in the past two years to qualify.\n";
	// 	}
	// }
	// else 
	// {
	// 	cout << "You must be employed to qualify.\n";
	// }

	if (employed == 'Y' && recentGrad =='Y')
	{
		cout << "You qualify for the special interest rate.\n";
	}
	else 
	{
		cout << "You must have graduated from college in the past two years to qualify.\n";
	}
	return 0;
}