#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("demofile.txt");

	cout << "Now writing data to the file.\n";

	fout << "Bach";
	fout << "Beethoven";
	fout << "Mozart";
	fout << "Schubert";

	fout.close();
	cout << "Done.\n";
	return 0;
}