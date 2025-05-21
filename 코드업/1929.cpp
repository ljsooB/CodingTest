#include <bits/stdc++.h>
using namespace std;

void rCollatz(int n)
{
	if (n == 1)
	{
		cout << n << "\n";
		return;
	}

	if (n % 2 == 0)
	{
		rCollatz(n / 2);
	}
	else
	{
		rCollatz(3 * n + 1);
	}

	cout << n << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	rCollatz(n);
}
