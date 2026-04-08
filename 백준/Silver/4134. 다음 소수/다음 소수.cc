#include <iostream>
#include <vector>

using namespace std;

bool is_prime(long long n)
{
	if (n < 2)
	{
		return false;
	}

	for (long long i = 2; i * i <= n; i++)
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

	int N;
	vector<long long> v;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		long long t;

		cin >> t;

		v.push_back(t);
	}

	for (size_t i = 0; i < v.size(); i++)
	{
		long long j = v[i];

		while (true)
		{
			if (is_prime(j))
			{
				cout << j << '\n';

				break;
			}

			j++;
		}
	}

}