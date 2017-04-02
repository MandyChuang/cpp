#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	istringstream stream1;
    float num;
   
    // use it once
    string string1 = "25 1 3.235\n1111111\n222222";
    stream1.str(string1);
    while( stream1 >> num )
      cout << "num: " << num << endl;  // displays numbers, one per line
   
    // use the same string stream again with clear() and str()
    string string2 = "1 2 3 4 5  6 7 8 9 10";
    stream1.clear();
    stream1.str(string2);
   
    while( stream1 >> num )
      cout << "num: " << num << endl;  // displays numbers, one per line
	return 0;
}