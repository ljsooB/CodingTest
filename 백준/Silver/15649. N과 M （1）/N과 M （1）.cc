#include <bits/stdc++.h>
using namespace std;
bool isUsed[9];
int arr[9];
int n, m;


void func(int k)
{
	if (k == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		if (!isUsed[i])
		{
			arr[k] = i;
			isUsed[i] = 1;
			func(k+1);
			isUsed[i] = 0;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	func(0);
}