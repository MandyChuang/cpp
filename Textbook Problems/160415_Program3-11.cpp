#include <iostream>
using namespace std;

int main()
{
    int begInv, sold, store1, store2, store3;

    cin >> begInv;

    store1 = store2 = store3 = begInv;

    cin >> sold;
    store1 -= sold;

    cin >> sold;
    store2 -= sold;

    cin >> sold;
    store3 -= sold;

    cout << "Store 1: " << store1 << endl;
    cout << "Store 2: " << store2 << endl;
    cout << "Store 3: " << store3 << endl;
    return 0;
}
