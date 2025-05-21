#include <bits/stdc++.h>
using namespace std;
 
int memo[15][15];

int SuperSum(int k, int n)
{
	if (memo[k][n] != 0) return memo[k][n];

	if (k == 0)
		return memo[k][n] = n;

	for (int i = 1; i <= n; i++)
	{
		memo[k][n] += SuperSum(k - 1, i);
	}

	return memo[k][n];
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int k, n;
	while (cin >> k >> n)
	{
		memset(memo, 0, sizeof(memo));

		cout << SuperSum(k , n) << "\n";
	}

}
