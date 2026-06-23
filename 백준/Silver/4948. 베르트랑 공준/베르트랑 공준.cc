#include <iostream>

using namespace std;

bool is_p(int n)
{
	if (n < 2)
		return false;

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	while(true)
	{
		int n;

		cin >> n;

		if (n == 0)
		{
			break;
		}

		int ans = 0;
		for (int i = n + 1; i <= 2 * n; i++)
		{
			if (is_p(i))
			{
				ans++;
			}
		}

		cout << ans << "\n";
	}
}