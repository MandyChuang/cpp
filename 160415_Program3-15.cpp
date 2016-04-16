#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double quotient, number1 = 132.364, number2 = 26.91;

    quotient = number1 / number2;
    cout << quotient << endl;
    cout << setprecision(5) << quotient << endl;
    cout << setprecision(4) << quotient << endl;
    cout << setprecision(3) << quotient << endl;
    cout << setprecision(2) << quotient << endl;
    cout << setprecision(1) << quotient << endl;


    cout << setprecision(3) << 28.92786 << endl;
    cout << setprecision(5) << 21 << endl;
    cout << setprecision(4) << 109.5 << endl;
    cout << setprecision(2) << 34.28596 << endl;
	return 0;
}
