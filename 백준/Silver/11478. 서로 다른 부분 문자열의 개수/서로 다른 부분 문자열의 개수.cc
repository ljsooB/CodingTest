#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	
	cin >> s;

	vector<string> order;
	unordered_set<string> seen;

	for (size_t i = 0; i < s.length(); i++)
	{
		for (size_t j = 0; j < s.length(); j++)
		{
			string t = s.substr(j, i + 1);

			if (seen.insert(t).second)
			{
				order.push_back(t);
			}
		}
	}

	cout << order.size();
}