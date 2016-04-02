#include <iostream>
using namespace std;

int main()
{
    long double apple;

    cout << "The size of an integer is " << sizeof(int);
    cout << " bytes.\n";
    cout << "The size of a long integer is " << sizeof(long) << " bytes.\n";
    cout << "The size of a long long integer is " << sizeof(long long) << " bytes.\n";
    cout << "The size of a double is " << sizeof(double) << " bytes.\n";
    cout << "An apple can be eaten in " << sizeof(apple) << " bytes!\n";
    return 0;
}
