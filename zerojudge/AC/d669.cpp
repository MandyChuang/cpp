#include <iostream>
using namespace std;

int main()
{
	int h1, m1, h2, m2;
	while(cin >> h1 >> m1 >> h2 >> m2)
	{
		int total = 0;
		if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
			break;
		if(m1 < m2)
			total += (m2 - m1);
		else if(m1 > m2)
			total += (m2 - m1);
		if(h1 < h2)
			total += (h2 - h1) * 60;
		else if(h1 > h2)
			total += (24 - h1 + h2) * 60;
		else if(h1 == h2 && m1 > m2)
			total += 24 * 60;

		cout << total << endl;

		cout << ((h2 * 60 + m2) - (h1 * 60 + m1) + 1440) % 1440 << endl;
	}
	return 0;
}

