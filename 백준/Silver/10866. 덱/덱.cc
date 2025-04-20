#include <iostream>
#include <deque>

using namespace std;

int main()
{
	int n, num;
	deque<int> d;
	string Sen;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> Sen;

		if (Sen == "push_front")
		{
			cin >> num;
			d.push_front(num);
		}
		else if (Sen == "push_back")
		{
			cin >> num;
			d.push_back(num);
		}
		else if (Sen == "pop_front")
		{
			if (d.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << d.front() << "\n";
				d.pop_front();
			}
		}
		else if (Sen == "pop_back")
		{
			if (d.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << d.back() << "\n";
				d.pop_back();
			}
		}
		else if (Sen == "size")
		{
			cout << d.size() << "\n";
		}
		else if (Sen == "empty")
		{
			if (d.empty())
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
			if (d.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << d.front() << "\n";
			}
		}
		else if (Sen == "back")
		{
			if (d.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << d.back() << "\n";
			}
		}
	}
}