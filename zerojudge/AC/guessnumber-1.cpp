#include <iostream>
#include <string>
using namespace std;

int guessCmpAnswer(string answer, string guess)
{
	int similarity = 0;
	// a
	for(int i = 0; i < 4; i++)
		if(answer[i] == guess[i])
			similarity += 10;
	// b
	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 4; j++)
			if(answer[i] == guess[j] && i != j)
				similarity ++;
	// cout << "answer: " << answer << endl;
	// cout << "guess: " << guess << endl;
	// cout << "similarity: " << similarity << endl;
	return similarity;
}

int main()
{
	while(true)
	{
		string guessArr[10000];
		int count = 0;
		int ab;
		for(int i = 0; i < 10; i++)
		{
			for(int j = 0; j < 10; j++)
			{
				if(i == j)
					continue;
				for(int k = 0; k < 10; k++)
				{
					if(i == k || j == k)
						continue;
					for(int m = 0; m < 10; m++)
					{
						if(i == m || j == m || k == m)
							continue;
						guessArr[count] = "";
						guessArr[count] += static_cast<char>(i + '0');
						guessArr[count] += static_cast<char>(j + '0');
						guessArr[count] += static_cast<char>(k + '0');
						guessArr[count] += static_cast<char>(m + '0');
						count++;
					}
				}
			}		
		}
		//cout << count << " " << guessArr[0];
		while(count > 1)
		{
			cout << "現在有 " << count << " 種可能性, 請輸入 " << guessArr[0] << " 幾 A 幾 B?" << endl;
			cin >> ab;
			for(int i = 1; i < count; i++)
			{
				if(ab != guessCmpAnswer(guessArr[0], guessArr[i]))
				{
					guessArr[i] = guessArr[--count];
					i--;
				}
			}
			if(ab != 40)
				guessArr[0] = guessArr[--count];
		}
		cout << "Answer is " << guessArr[0] << endl;
	}
	return 0;
}

// 0123 12
// 0231
// 0132 22 x
// 0213

//0A0B 360
//0A1B 1440
//0A2B 1260
//0A3B 264
//0A4B 9
//1A0B 480
//1A1B 720
//1A2B 216
//1A3B 8
//2A0B 180
//2A1B 72
//2A2B 6
//3A0B 24
