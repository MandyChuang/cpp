#include <iostream>
using namespace std;

int main()
{
	int modelNum;

	cin >> modelNum;

	switch (modelNum)
	{
		case 300:
			cout << "\tPicture-in-a-picture.\n";
		case 200:
			cout << "\tStereo sound.\n";
		case 100:
			cout << "\tRemote control.\n";
			break;
		default:
			cout << "You can only coose the 100, 200, or 300.\n";
	}
	return 0;
}