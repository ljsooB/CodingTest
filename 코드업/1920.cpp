#include <bits/stdc++.h>
using namespace std;

void binary(int n)
{
	if (n / 2)
		binary(n / 2);

	cout << n % 2;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	binary(n);

}
