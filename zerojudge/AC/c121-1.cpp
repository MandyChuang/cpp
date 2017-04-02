#include <iostream>
using namespace std;

string num[5001] = {"\0", "\x01"};

void Fibonacci()
{
    for(int i = 2; i < 5001; i++)
    {
        int a = num[i - 2].size();
        int b = num[i - 1].size();
        num[i].resize(b + 1, 0);
        for(int j = b - 1; j >= 0; j--)
        {
            if(j>=b-a)
                num[i][j + 1] += num[i - 2][j - b + a];
            num[i][j + 1] += num[i - 1][j];
            if(num[i][j + 1] > 9)
            {
                num[i][j]++;
                num[i][j + 1] -= 10;
            }
        }
        if(num[i][0] == 0)
            num[i].erase(num[i].begin());
    }
    for(int i = 0; i < 5001; i++)
    {
        for(int j = 0; j < num[i].size(); j++)
            num[i][j] += '0';
    }
    num[0] = "0";
}

int main()
{
    int n;
    Fibonacci();
    while(cin >> n)
    {
        cout << "The Fibonacci number for " << n << " is " << num[n] << endl;
    }
    return 0;
}
