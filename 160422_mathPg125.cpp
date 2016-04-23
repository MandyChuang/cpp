#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double num, s;
	cout << "Enter a number: ";
	cin >> num;
	s = sqrt(num);
	cout << "The square root of " << num << " is " << s << endl;
	return 0;
}