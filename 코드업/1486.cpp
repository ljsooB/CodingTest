#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, num = 1;

	cin >> n >> m;

	int** Array2 = new int* [n];
	for (int i = 0; i < n; i++)
	{
		Array2[i] = new int[m];
	}

	int top = 0, bottom = n - 1;
	int left = 0, right = m - 1;

	while (top <= bottom && left <= right)
	{
		for (int i = top; i <= bottom; i++)
		{
			Array2[i][right] = num++;
		}
		right--;

		for (int i = right; i >= left; i--)
		{
			Array2[bottom][i] = num++;
		}
		bottom--;

		if (left <= right)
		{
			for (int i = bottom; i >= top; i--)
			{
				Array2[i][left] = num++;
			}
			left++;
		}

		if (top <= bottom)
		{
			for (int i = left; i <= right; i++)
			{
				Array2[top][i] = num++;
			}
			top++;
		}
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
