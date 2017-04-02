#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char place[] = "The Windy City";
	char *strPtr = nullptr;
	strPtr = strstr(place, "Windy");
	if(strPtr != nullptr)
		cout << "Windy found." << endl;
	else
		cout << "Windy not found." << endl;
	return 0;
}