#include <bits/stdc++.h>
using namespace std;

int Collatz(int n)
{
	if (n == 1) return 1;

	cout << n << "\n";

	if (n % 2 == 0)
	{
		return Collatz(n / 2);
	}
	else
	{
		return Collatz(3 * n + 1);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	cout << Collatz(n);
}
