#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i;
	char ca;

	while(cin >> dec >> i)
	{
		if(i < 0)
			break;
		if(i == 0)
			ca = cin.get();
		if(i == 0 && ca == 'x')
		{
			cin >> hex >> i;
			cout << dec << i << endl;
		}
		else
			cout << "0x" << uppercase << hex << i << endl;
	}
	return 0;
}