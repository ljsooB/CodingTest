#include <iostream>

using namespace std;

int main()
{
	int n;

	int f = 5, t = 3;
	int f_cnt = 0, t_cnt = 0;
	cin >> n;

	int cnt = 0;

	int answer = 0;
	while (true)
	{
		answer = f_cnt * f + t_cnt * t;

		if (answer == n)
		{
			cnt = f_cnt + t_cnt;

			cout << cnt << endl;

			break;
		}
		else if (answer < n)
		{
			f_cnt++;

			cnt++;
		}
		else if (answer > n)
		{
			f_cnt--;

			t_cnt++;

			if (f_cnt < 0)
			{
				cout << -1 << endl;

				break;
			}
		}
	}
}