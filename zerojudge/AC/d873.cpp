#include <iostream>
#include <string>
using namespace std;

bool isOverflow(string a)
{
	if(a.size() > 10)
		return true;
	long long num = stoll(a);
	if(num > 2147483647)
		return true;
	return false;
}
bool isMultiplyOverflow(string a, string b)
{
	if(a == "0" || b == "0")
		return false;
	if(a.size() + b.size() - 1 > 10)
		return true;
	long long anum = stoll(a);
	long long bnum = stoll(b);
	if(anum * bnum > 2147483647)
		return true;
	return false;
}
bool isAddOverflow(string a, string b)
{
	if(a.size() > 10 || b.size() > 10)
		return true;
	long long anum = stoll(a), bnum = stoll(b);
	if(anum + bnum > 2147483647)
		return true;
	return false;
}


int main()
{
	string a, b;
	char symbol;
	while(cin >> a >> symbol >> b)
	{
		cout << a << " " << symbol << " " << b << endl;
		if(isOverflow(a))
			cout << "first number too big" << endl;
		if(isOverflow(b))
			cout << "second number too big" << endl;
		if(symbol == '+' && isAddOverflow(a, b))
			cout << "result too big" << endl;
		if(symbol == '*' && isMultiplyOverflow(a, b))
			cout << "result too big" << endl;
	}
	return 0;
}
