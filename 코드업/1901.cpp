#include <iostream>
using namespace std;

void Output(int n, int a)
{
	if (a > n) return;

	cout << a << "\n";

	Output(n, a + 1);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	Output(n, 1);
}
