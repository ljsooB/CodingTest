#include <bits/stdc++.h>
using namespace std;
int arr[9];
vector <int> v;
bool isUsed[9];
int N, M;

void func(int k, int start)
{
	if (k == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = start; i < N; i++)
	{
		if (!isUsed[i])
		{
			arr[k] = v[i];
			isUsed[i] = 1;
			func(k + 1, 0);
			isUsed[i] = 0;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	func(0, 0);
}