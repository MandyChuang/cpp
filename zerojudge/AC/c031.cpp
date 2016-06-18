// 14 0
// 13 0  (intput - 1)
// 12 1
// 10 2
// 7 3
// 3 4 (stop while)
// ans1=3+1=4  ans2=4+1-3=2
//if (4%2==0) swap -> ans2/ans1

//7 0
//6 0
//5 1
//3 2
//0 3
//ans1=0+1=1  ans2=3+1-0=4
//if(3%2==0) no swap -> ans1/ans2
#include <iostream>
using namespace std;

int main()
{
	int n, row, ans1, ans2;
	while(cin >> n)
	{
		cout << "TERM " << n;
		row = 0;
		n--;
		while(n > row)
		{
			n = n - (++row);
		}
		ans1 = n + 1;
		ans2 = row + 1 - n;
		if(row % 2 == 0)
			cout << " IS " << ans2 << "/" << ans1 << endl;
		else
			cout << " IS " << ans1 << "/" << ans2 << endl;
	}
	return 0;
}