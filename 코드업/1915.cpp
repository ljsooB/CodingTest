#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
	if (n <= 2) return 1;
	else
	{
		return fibonacci(n - 2) + fibonacci(n - 1);
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
