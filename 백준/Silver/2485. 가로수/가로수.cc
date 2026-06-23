#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<int> v;

	for (int i = 0; i < N; i++)
	{
		int t;
		cin >> t;
		v.push_back(t);
	}

	int cd = v[1] - v[0];

	for (size_t i = 1; i < v.size() - 1; i++)
	{
		cd = gcd(cd, v[i + 1] - v[i]);
	}

	int ans = 0;

	for (size_t i = 0; i < v.size() - 1; i++)
	{
		ans += (v[i + 1] - v[i]) / cd - 1;
	}

	cout << ans;
}