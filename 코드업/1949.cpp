#include <iostream>
using namespace std;

int main()
{
	int n; // 배열 크기
	int k; // 구간 크기
	int s, e, u;

	cin >> n >> k;

	int* Array = new int[n];
	for (int i = 0; i < n; i++)
	{
		Array[i] = 0;
	}

	for (int i = 0; i < k; i++)
	{
		cin >> s >> e >> u;
		Array[s - 1] += u;
		Array[e] -= u;
	}

	for (int i = 0; i < n; i++)
	{
		cout << Array[i] << " ";
	}

	cout << "\n";

	for (int i = 0; i < n - 1; i++)
	{
		Array[i + 1] += Array[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << Array[i] << " ";
	}

	delete[] Array;
	Array = nullptr;
}
