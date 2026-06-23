#include <iostream>

using namespace std;

#define MAX_NUM 10001

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int s[MAX_NUM] = { 0 };

	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int t;

		cin >> t;

		s[t]++;
	}

	for (int i = 0; i < MAX_NUM; i++)
	{
		for (int j = i; s[j] != 0;)
		{
			cout << j << "\n";

			s[j]--;
		}
	}
}