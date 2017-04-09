#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define BASE 100000000

int tmp[2][10000] = {{0}, {1}};
string fibo[5001] = {"0", "1"};

string to_eight_str(int n)
{
    string str = to_string(n);
    str.insert(0, 8-str.size(), '0');
    return str;
}

void fibo_init()
{
    int len = 1, n1 = 0, n2 = 1;
    for(int i=2; i<=5000; i++) {
        for(int j=0; j<len; j++) {
            tmp[n1][j] += tmp[n2][j];
            if(tmp[n1][j] >= BASE) {
                tmp[n1][j+1] ++;
                tmp[n1][j] -= BASE;
                len = max(len, j+2);
            }
        }
        fibo[i] = to_string(tmp[n1][len-1]);
        for(int j=len-2; j>=0; j--)
            fibo[i] += to_eight_str(tmp[n1][j]);
        swap(n1, n2);
    }
}

int main()
{
    fibo_init();
    int n;
    while(cin>>n)
        cout<< "The Fibonacci number for " << n << " is " << fibo[n]<<endl;
    return 0;
}