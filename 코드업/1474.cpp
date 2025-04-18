#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, num = 1, k = 1;

	cin >> n >> m;

	int** Array2 = new int* [n];
	for (int i = 0; i < n; i++)
	{
		Array2[i] = new int[m];
	}

	for (int i = m; i >= 1; i--)
	{
		if (k % 2 == 0)
		{
			for (int j = 1; j <= n; j++)
			{
				Array2[j-1][i-1] = num;
				num++;
			}
		}
		else
		{
			for (int j = n; j >= 1; j--)
			{
				Array2[j-1][i-1] = num;
				num++;
			}
		}
		k++;
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
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
