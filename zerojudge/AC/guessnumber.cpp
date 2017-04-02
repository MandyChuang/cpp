#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

bool guessValidation(string guess)
{
	if(guess.size() != 4)
		return false;
	for(int i = 0; i < 4; i++)
	{
		if(guess[i] < '0' || guess[i] > '9')
			return false;
		for(int j = 0; j < i; j++)
			if(guess[i] == guess[j])
				return false;
	}
	return true;
}

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
	// initialize random seed
	srand(time(NULL));
	while(true)
	{
		string answer = "0000";
		for(int i = 0; i < 4; i++)
		{
			while(true)
			{
				bool answerRegen = false;
				answer[i] = rand() % 10 + '0';
				for(int j = 0; j < i; j++)
					if(answer[i] == answer[j])
					{
						answerRegen = true;
						continue;
					}
				if(answerRegen)
					continue;
				break; // break while(true)
			}
		}
		// cout << "answer: " << answer;
		// cin.get();

		string guesses[100];
		int similarities[100];
		int counter = 1;
		while(cout << "\nEnter guess: " && cin >> guesses[counter])
		{
			if(!guessValidation(guesses[counter]))
			{
				cout << "Invalid guess." << endl;
				continue;
			}
			similarities[counter] = guessCmpAnswer(answer, guesses[counter]);
			counter++;

			cout << setw(9) << "Guess" << setw(8) << "Result" << endl;
			for(int i = 1; i < counter; i++)
			{
				cout << i << setw(8) << guesses[i] << "    " << similarities[i] / 10 << "A" << similarities[i] % 10 << "B" << endl;
			}
			if(similarities[counter - 1] == 40)
				break;
			if(counter == 9)
				break;
		}
		if(similarities[counter - 1] == 40)
			cout << "Congradulations!" << endl;
		else
			cout << "You lose. Answer is " << answer << endl;
	}
	return 0;
}

// 1234 0A2B
// 0123 0A3B X
// 5678 0A0B X