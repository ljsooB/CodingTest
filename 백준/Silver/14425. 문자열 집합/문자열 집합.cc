#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int N, M;

	map<string, int> S;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string t;

		cin >> t;

		S[t] = 1;
	}

	int a = 0;

	for (int i = 0; i < M; i++)
	{
		string t;

		cin >> t;

		if (S[t] == 1)
		{
			a++;
		}
	}

	cout << a;
}