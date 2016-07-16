#include <iostream>
using namespace std;
#define LEN_MAX 1000000

// int lens[LEN_MAX] = {0,1};

int main()
{
	int i, j, ans;
	while(cin >> i >> j)
	{
		ans = 0;
		cout << i << " " << j << " ";
		if(i > j)
		{
			int temp = i;
			i = j;
			j = temp;
		}
		for(int a = i; a <= j; a++)
		{
			int n = a, len = 1;
			while(n != 1)
			{
				if(n % 2)
				{
					n = 3 * n + 1;
				}
				else
				{
					n /= 2;
				}
				len++;
			}
			if(len > ans)
				ans = len;
		}
		cout << ans << endl;
	}
	return 0;
}

// a 2 
// b 1
// c x

// 1 
// 2 len[1]+1 1
// 3 len[10]+1 10 5 16 8 4 2 1
// 4 len[2]+1 2 1
// 5 len[16]+1 16 8 4 2 1
// 6 3 10 5 16 8 4 2 1
// 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
// 8 4 2 1
// 9 28 14 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
// 10 5 16 8 4 2 1

// Ｎ
// 檢查是否有 ＬＥＮ（Ｎ）
// 如果有 直接回傳 ＬＥＮ（Ｎ）
// 如果沒有就判斷是 Ｎ除以二 或是 三乘以Ｎ加一
// ＬＥＮ（Ｎ）＝ＬＥＮ（ＮＥＸＴ）加一
// 回傳 ＬＥＮ（Ｎ）
