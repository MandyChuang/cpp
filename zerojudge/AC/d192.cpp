#include <iostream>
using namespace std;

int people[100000] = {};

int alive(int n, int k)
{
	// int live = n;
	// int count = 0;
	// while(live != 1)
	// {
	// 	for(int c = 1; c <= n; c++)
	// 	{
	// 		if(people[c] == 1)
	// 			count++;
	// 		else if(people[c] == -1)
	// 			continue;
	// 		if(count == k)
	// 		{
	// 			people[c] = -1;
	// 			live--;
	// 			count = 0;
	// 		}
	// 	}
	// }
	// for(int m = 1; m <= n; m++)
	// 	if(people[m] == 1)
	// 		return m;
	if(n == 1)
		return 0;
	else
		return (alive(n - 1, k) + k) % n;
	// else
	// {
	// 	int m = n - (n / k);
	// 	return k * ((alive(m, k) - n % k) % m) / (k - 1);
	// }
}

int main()
{
	int i, n, k;
	cin >> i;
	for(int j = 0; j < i; j++)
	{
		cin >> n >> k;
		for(int m = 1; m <= n; m++)
			people[m] = 1;
		cout << "Case " << j + 1 << ": " << alive(n, k) + 1 << endl;
	}
	return 0;
}



// 1 3 -> 1
// 2 3 -> 2
// 3 3 -> 2
// 4 3 -> 1
// 5 3 -> 4
// 6 3 -> 1
// 7 3 -> 4
// 8 3 -> 7
// 9 3 -> 1
// 10 3 -> 4
// 11 3 -> 7
// 12 3 -> 10
// 13 3 -> 13
// 14 3 -> 2
// 15 3 -> 5
// 16 3 -> 8
// 17 3 -> 11
// 18 3 -> 14
// 19 3 -> 17
// 20 3 -> 20
// 21 3 -> 16
// 22 3 -> 5
// 23 3 -> 8