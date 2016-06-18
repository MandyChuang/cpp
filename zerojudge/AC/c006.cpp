    // 順時鐘方向轉轉盤2整圈
//720
    // 繼續順時鐘方向轉直到到達第一個號碼上
//(n1+(40-n2))*9
    // 逆時鐘方向轉轉盤一整圈
//360
    // 繼續逆時鐘方向轉直到到達第二個號碼
//((40-n2)+n3)*9
    // 順時鐘方向轉轉盤直到到達第三個號碼
//(n2+(40-n3)*9
    // 拉開鎖頭就可以打開了

#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3, n4, ans;
	//int t = 0;
	while(cin >> n1 >> n2 >> n3 >> n4)
	{
		// t++;
		// if(t == 7)
		// 	cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;
		ans = 1080;
		// n1, n2, n3, n4 = 0 -> end
		if(n1 == 0 && n2 == 0 && n3 == 0 && n4 == 0)
			break;

		if(n1 < n2)
			ans += (n1 + 40 - n2) * 9;
		else 
			ans += (n1 - n2) * 9;
		if(n2 < n3)
			ans += (n3 - n2) * 9;
		else 
			ans += (n3 + 40 - n2) * 9;
		if(n3 < n4)
			ans += (n3 + 40 - n4) * 9;
		else
			ans += (n3 - n4) * 9;
		cout << ans << endl;
	}
	return 0;
}