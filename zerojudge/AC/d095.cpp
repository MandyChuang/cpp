// 12:00
// 	12*60=720
// 	720*0.5=360%360=0
// 	720*6=4320%360=0
// 	0-0=0
// 9:00
// 	9*60=540
// 	540*0.5=270%360=270
// 	540*6=3240%360=0
// 	270-0=270
// 	360-270=90
// 8:10
// 	8*60+10=490
// 	490*0.5=245%360=245
// 	490*6=2940%360=60
// 	245-60=185
// 	360-185=175 
//6:45
	// 6*60+45=405
	// 405*0.5=202.5%360=202.5
	// 405*6=2430%360=270
	// 202.5-270=-67.5
// 1:45
// 	1*60+45=105
// 	105*0.5=52.5%360=52.5
// 	105*6=630%260=270
// 	52.5-270=-217.5
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int h, m;
	char ch;
	double min, hourHand, minuteHand, degree;
	while(cin >> h >> ch >> m)
	{
		if (h == 0 && m == 0)
			break;

		min = h * 60 + m;
		hourHand = fmod((min * 0.5), 360);
		minuteHand = fmod((min * 6), 360);
		degree = abs(hourHand - minuteHand);

		if(degree > 180 || degree < 0)
			degree = 360 - degree;

		cout << fixed << showpoint << setprecision(3) << degree << endl;
	}
	return 0;
}
