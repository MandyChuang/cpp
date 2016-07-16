#include <iostream>
#include <string>
using namespace std;

int main()
{
	string number;
	int oddTotal, evenTotal;
	while(cin >> number)
	{
		oddTotal = 0, evenTotal = 0;
		if(number == "0")
			break;
		for(int i = 0; i < number.length(); i++)
		{
			if(i % 2 == 0)
				oddTotal += number[i] - '0';
			else
				evenTotal += number[i] - '0';
			// cout << static_cast<int>(number[i]) << endl;
		}
		// cout << oddTotal << " " << evenTotal << endl;
		if((oddTotal - evenTotal) % 11 == 0)
			cout << number << " is a multiple of 11." << endl;
		else
			cout << number << " is not a multiple of 11." << endl;
	}
	return 0;
}