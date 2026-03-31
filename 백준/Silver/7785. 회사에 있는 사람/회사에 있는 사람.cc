#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	map<string, string> m;

	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string t, log;

		cin >> t >> log;

		m[t] = log;
	}

	vector<string> v;

	for (auto it = m.rbegin(); it != m.rend(); ++it)
	{
		if (it->second == "enter")
		{
			cout << it->first << "\n";
		}
	}
}