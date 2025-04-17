#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, num;
	string Sen;
	stack<int> s;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> Sen;

		if (Sen == "push")
		{
			cin >> num;
			s.push(num);
		}
		else if (Sen == "pop")
		{
			if (s.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (Sen == "size")
		{
			cout << s.size() << "\n";
		}
		else if (Sen == "empty")
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
		else if (Sen == "top")
		{
			if (s.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << s.top() << "\n";
			}
		}
	}
}