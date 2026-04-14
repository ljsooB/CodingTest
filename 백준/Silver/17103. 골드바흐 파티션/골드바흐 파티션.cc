#include <iostream>
#include <vector>

using namespace std;

#define MAX_NUM 1000001

void get_p_list(int n, vector<bool>& v)
{
	v[0] = false;
	v[1] = false;

	for (int i = 2; i <= n; i++)
	{
		v[i] = true;
	}

	for (int i = 2; i * i <= n; i++)
	{
		if (false == v[i])
		{
			continue;
		}

		for (int j = i * i; j <= n; j += i)
		{
			v[j] = false;
		}
	}
}

int get_goldbach(int n, const vector<bool>& v)
{
	int ans = 0;

	for (int i = 2; i <= n / 2; i++)
	{
		if (v[i] && v[n - i])
		{
			ans++;
		}
	}

	return ans;
}

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	vector<bool> is_prime(MAX_NUM, true);

	int N;
	cin >> N;

	int max_num = 0;
	vector<int> v;

	for (int i = 0; i < N; i++)
	{
		int t;
		cin >> t;

		if (t > max_num)
		{
			max_num = t;
		}

		v.push_back(t);
	}

	get_p_list(max_num, is_prime);

	for (size_t i = 0; i < v.size(); i++)
	{
		cout << get_goldbach(v[i], is_prime) << "\n";
	}

	return 0;
}