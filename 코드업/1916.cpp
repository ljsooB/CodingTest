#include <bits/stdc++.h>
using namespace std;

int memo[200] = { 0 };

int fibonacci(int n)
{
	if (n <= 2)
	{
		memo[n] = 1;
		return 1;
	}

	if (memo[n] != 0)
	{
		return memo[n];
	}
	else
	{

		return memo[n] = (fibonacci(n - 2) + fibonacci(n - 1)) % 10009;
	}

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	cout << fibonacci(N);
}
