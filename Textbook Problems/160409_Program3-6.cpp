#include <iostream>
using namespace std;

int main()
{
    double test1, test2, test3;
    double average;

    //first grade
    cin >> test1;
    //second grade
    cin >> test2;
    //third grade
    cin >> test3;

    average = (test1 + test2 + test3) / 3;

    cout << "The average score is: " << average << endl;
    return 0;
}
