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

	int M, N;

	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		if (is_p(i))
		{
			cout << i << "\n";
		}
	}
}