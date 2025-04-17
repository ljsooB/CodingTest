#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	int n, num;
	string Sen;
	queue<int> q;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> Sen;
		if (Sen == "push")
		{
			cin >> num;
			q.push(num);
		}
		else if (Sen == "pop")
		{
			if (q.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (Sen == "size")
		{
			cout << q.size() << "\n";
		}
		else if (Sen == "empty")
		{
			if (q.empty())
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (Sen == "front")
		{
			if (q.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.front() << "\n";
			}
		}
		else if (Sen == "back")
		{
			if (q.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.back() << "\n";
			}
		}
	}
	
}