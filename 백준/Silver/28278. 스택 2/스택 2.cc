#include <iostream>
#include <stack>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	stack<int> s;

	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int t;

		cin >> t;

		if (t == 1)
		{
			int p;

			cin >> p;

			s.push(p);
		}
		else if (t == 2)
		{
			if (s.size())
			{
				cout << s.top() << "\n";

				s.pop();
			}
			else
			{
				cout << -1 << "\n";
			}
		}
		else if (t == 3)
		{
			cout << s.size() << "\n";
		}
		else if (t == 4)
		{
			if (s.empty())
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (t == 5)
		{
			if (s.size())
			{
				cout << s.top() << "\n";
			}
			else
			{
				cout << -1 << "\n";
			}
		}
	}
	
}