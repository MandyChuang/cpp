#include <iostream>
using namespace std;

int main()
{
	char wrong[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/', ' '};
	char correct[] = {'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', 'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', ' '};
	// cout << sizeof(wrong) << " " << sizeof(correct) << endl;

	string input;
	while(getline(cin, input))
	{
		for(int i = 0; i < input.size(); i++)
		{
			int pos = 0;
			while(wrong[pos] != input[i])
				pos++;
			cout << correct[pos];
		}
		cout << endl;
	}
	return 0;
}