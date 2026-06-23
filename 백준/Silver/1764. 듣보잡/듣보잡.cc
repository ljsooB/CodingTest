#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;

	cin >> N >> M;

	map<string, int> m;

	for (int i = 0; i < N; i++)
	{
		string t;

		cin >> t;

		m[t] = 1;
	}

	map<string, int> a;
	for (int i = 0; i < M; i++)
	{
		string t;

		cin >> t;

		if (m.end() != m.find(t))
		{
			a[t] = 1;
		}
	}

	cout << a.size() << "\n";

	for (map<string, int>::iterator it = a.begin(); it != a.end(); it++)
	{
		cout << it->first << "\n";
	}
}