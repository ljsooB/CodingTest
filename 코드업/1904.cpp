#include <bits/stdc++.h>
using namespace std;

void OddN(int A, int B)
{
	if (A > B) return;

	if (A % 2 == 1)
	{
		cout << A << " ";
	}

	OddN(++A, B);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	cin >> a >> b;

	OddN(a, b);
}
