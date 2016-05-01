#include <iostream>
using namespace std;

int main()
{
	const int MIN_PLAYERS = 9,
			  MAX_PLAYERS = 15;

	int players, teamPlayers, numTeams, leftOver;

	cin >> teamPlayers;

	while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
	{
		cout << "You should have at least " << MIN_PLAYERS << " but no more than " << MAX_PLAYERS << " per teams.\n" ;
		cin >> teamPlayers;
	}

	cin >> players;

	while (players <= 0)
	{
		cout << "Please enter 0 or greater: ";
		cin >> players;
	}

	numTeams = players / teamPlayers;
	leftOver = players % teamPlayers;

	cout << "There will be " << numTeams << " teams with " << leftOver << " players left over.\n";
	return 0;
}