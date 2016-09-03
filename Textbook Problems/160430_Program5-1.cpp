#include <iostream>
using namespace std;

int main()
{
	int num = 4;

	cout << "The variable num is " << num << endl;
	cout << "I will now increment num.\n\n";

	num++;
	cout << "Now the variable num is " << num << endl;
	cout << "I will now increment num.\n\n";

	++num;
	cout << "Now the variable num is " << num << endl;
	cout << "I will now decrement num.\n\n";

	num--;
	cout << "Now the variable num is " << num << endl;
	cout << "I will now decrement num.\n\n";

	--num;
	cout << "Now the variable num is " << num << endl;
	
	return 0;
}