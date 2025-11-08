#include <iostream>

using namespace std;

int main()
{
	string s;

	cin >> s;

	string re_s = "";

	for (int i = s.size() - 1; i >= 0; i--)
	{
		re_s.push_back(s[i]);
	}

	if (s == re_s)
	{
		 cout << 1;
	}
	else
	{
		cout << 0;
	}
}