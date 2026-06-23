#include <iostream>

using namespace std;

int main()
{
	int N, min = 1, max = 1, answer = 0;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		if (N == 1)
		{
			answer = 1;

			break;
		}

		if (N >= min && N <= max)
		{
			answer = i;

			break;
		}

		min = max + 1;

		max = min + (i) * 5 + (i - 1);
	}

	cout << answer;
}