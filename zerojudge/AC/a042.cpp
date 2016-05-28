
// 1  2 
// 2  4   2(n-1)
// 3  8   2n-2 
// 4  14  2n-2 
// 5  22  2n-2 
// 6  32  2n-2 
// 7  44  2n-2 

// 2 + 2 * 2 - 2
// 2 + 2*2-2 + 2*3-2

// 2 + (1~n-1, 2k)

// 2 + (n-1)*n
// n*n - n +2


// 2 4 8 14 22 32 44
//   2 4 6  8  10 12

//   14 * 6 / 2 + 2 
//   ((7-1) * 2 + 2) * (7-1) / 2 + 2
//   n * (n-1)  + 2
 #include <iostream>
 using namespace std;
 
 int main()
 {
 	int n, ans;
 	while(cin >> n)
 	{
 		ans = (n - 1) * n + 2;
 		cout << ans << endl;
 	}
 	return 0;
 }