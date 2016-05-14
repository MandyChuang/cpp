#include <iostream>
using namespace std;

// 1
// 22
// 333
// 22
// 1

// 1
// 22
// 333
// 22
// 1

int main()
{
	int t, a, f;
	cin >> t;
	bool isfirst = true;

	for(int i=1; i<=t; i++) {
		cin>>a>>f;
		for(int j=1; j<=f; j++) {
			if(isfirst)
				isfirst = false;
			else
				cout<<endl;
			for(int k=1; k<=a; k++) {
				for(int m=1; m<=k; m++)
					cout<<k;
				cout<<endl;
			}
			for(int k=a-1; k>=1; k--) {
				for(int m=1; m<=k; m++)
					cout<<k;
				cout<<endl;
			}
		}
	}

	return 0;
}