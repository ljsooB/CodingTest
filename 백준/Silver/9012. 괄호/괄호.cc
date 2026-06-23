#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n;

	cin >> n;

	vector<string> v;
	for (int i = 0; i < n; i++)
	{
		string s;

		cin >> s;

		v.push_back(s);
	}

	for (size_t i = 0; i < v.size(); i++)
	{
		stack<char> s;
		bool is_out = false;

		for (size_t j = 0; j < v[i].size(); j++)
		{
			if (')' == v[i][j])
			{
				if (s.empty())
				{
					cout << "NO" << "\n";

					is_out = true;

					break;
				}
				else
				{
					s.pop();
				}
			}
			else if ('(' == v[i][j])
			{
				s.push(v[i][j]);
			}
		}

		if (s.empty() && false == is_out)
		{
			cout << "YES" << "\n";
		}
		else if (false == s.empty())
		{
			cout << "NO" << endl;
		}
	}
}