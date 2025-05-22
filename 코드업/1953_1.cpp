#include <bits/stdc++.h>
using namespace std;

void triangle(int level, int count)
{
	if (level == 1)
	{
		cout << "*";
		return;
	}

	if (count == 1)
	{
		triangle(level - 1, level - 1);
		cout << "\n";
	}
	else
	{
		triangle(level, count - 1);
	}

	cout << "*";

	return;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	triangle(n, n);

}
