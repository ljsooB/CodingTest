#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, num = 1;

	cin >> n;

	int** Array2 = new int* [n];
	for (int i = 0; i < n; i++)
	{
		Array2[i] = new int[n];
	}

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			for (int j = n - 1; j >= 0; j--)
			{
				Array2[j][i - 1] = num;
				num++;
			}
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				Array2[j][i - 1] = num;
				num++;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << Array2[i][j] << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < n; i++)
	{
		delete[] Array2[i];
	}

	delete[] Array2;
	Array2 = nullptr;
}
