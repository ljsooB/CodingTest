#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;

	cin >> N;

	for (int i = 1; i < N; i++)
	{
		string s = to_string(i);
		int l = s.length();

		int t = 1;
		for (int j = 0; j < l; j++)
		{
			t *= 10;
		}

		int answer = i;

		int temp = i;
		while (true)
		{
			if (temp < 10)
			{
				answer += temp;

				if (answer == N)
				{
					cout << i << endl;

					return 0;
				}

				break;
			}

			answer += temp / t;

			temp %= t;
			t /= 10;
		}
	}

	cout << 0 << endl;
}