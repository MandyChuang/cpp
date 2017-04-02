#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
using namespace std;

const int ROWS = 4;
const int COLS = 5;

int Smallest(int prices[]);
void Report(vector<string> items);
int Matches(vector<string> names, string target);
string GetChoice(string item1, string item2, string item3);
double BottomRow(double prices[][COLS]);

int main()
{
	ofstream fout;
	fout.open("message.txt");
	fout << "kiwis are tasty" << endl;
	fout.close();

	ifstream fin;
	fin.open("list.txt");
	int sum = 0, a;
	while(fin >> a)
	{
		sum += a;
	}
	fin.close();
	cout << sum << endl;

	srand(time(0));
	int prices[1000];
	for(int i = 0; i < 1000; i++)
	{
		prices[i] = rand() % 100;
	}
	cout << Smallest(prices) << endl;

	vector<string> items = {"string", "int"};
	Report(items);

	vector<string> names = {"a", "b", "a", "c"};
	string target = "a";
	cout << Matches(names, target) << endl;

	string item1 = "item1", item2 = "item2", item3 = "item3";
	string userChoice = GetChoice(item1, item2, item3);
	cout << "User Choice: " << userChoice << endl;

	double grades[ROWS][COLS] = {};
	for(int i = 0; i < COLS; i++)
	{
		grades[ROWS - 1][i] = rand() % 100;
	}
	cout << BottomRow(grades) << endl;

	return 0;
}

int Smallest(int prices[])
{
	int small = prices[0];
	for(int i =  1; i < 1000; i++)
	{
		if(prices[i] < small)
			small = prices[i];
	}
	return small;
}
void Report(vector<string> items)
{
	for(int i = 0; i < items.size(); i++)
	{
		if(items[i][0] == 's')
			cout << items[i] << endl;
	}
}
int Matches(vector<string> names, string target)
{
	int match = 0;
	for(int i = 0; i < names.size(); i++)
	{
		if(names[i].find(target) != string::npos)
			match++;
	}
	return match;
}
string GetChoice(string item1, string item2, string item3)
{
	string userchoice;
	do
	{
		cout << "Please choose one of these items: " << endl;
		cout << item1 << endl;
		cout << item2 << endl;
		cout << item3 << endl;
		getline(cin, userchoice);
	}
	while(userchoice != item1 && userchoice != item2 && userchoice != item3);
	return userchoice;
}
double BottomRow(double prices[][COLS])
{
	double total = 0;
	for(int i = 0; i < COLS; i++)
	{
		total += prices[ROWS - 1][i];
	}
	return total / COLS;
}