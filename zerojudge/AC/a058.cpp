#include <iostream>
using namespace std;

int main()
{
	int times, n, k[3]={};
	while(cin >> times)
	{
		for(int t = 0; t < times; t++)
		{
			cin >> n;
			k[n % 3]++;
		}
		cout << k[0] << " " << k[1] << " " << k[2] << endl;
	}
	return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int times, n, k1, k2, k3;
// 	while(cin >> times)
// 	{
// 		k1 = k2 = k3 = 0;
// 		for(int t = 0; t < times; t++)
// 		{
// 			cin >> n;
// 			if(n % 3 == 1)
// 				k1++;
// 			else if(n % 3 == 2)
// 				k2++;
// 			else
// 				k3++;
// 		}
// 		cout << k3 << " " << k1 << " " << k2 << endl;
// 	}
// 	return 0;
// }