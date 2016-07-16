#include <iostream>
#include <string>
using namespace std;

int main()
{
	string quote;
	int quotation = 0;
	while(getline(cin, quote))
	{
		for(int i = 0; i < quote.length(); i++)
		{
			if(quote[i] != '"')
			{
				cout << quote[i];
			}
			else if(quotation % 2 == 0)
			{
				cout << "``";
				quotation++;
			}
			else
			{
				cout << "''";
				quotation++;
			}
			//cout << quotation << endl;
		}
		cout << endl;
	}
	return 0;
}

// "To be or not to be," quoth the Bard, "that is the question".
// The programming contestant replied: "I must disagree. To `C' or not to `C', that is The Question!"

