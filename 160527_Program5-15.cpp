#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("demofile.txt");

	cout << "Now writing data to the file.\n";

	fout << "Bach\n";
	fout << "Beethoven\n";
	fout << "Mozart\n";
	fout << "Schubert\n";

	fout.close();
	cout << "Done.\n";
	return 0;
}