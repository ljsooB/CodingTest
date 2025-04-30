#include <iostream>
using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	int** Array2 = new int* [n];
	for (int i = 0; i < n; i++)
	{
		Array2[i] = new int[m];
	}

	int num = n * m;
	int left = 0, right = m - 1;
	int top = 0, bottom = n - 1;

	while (left <= right && top <= bottom)
	{
		for (int i = bottom; i >= top; i--)
		{
			Array2[i][left] = num--;
		}
		left++;

		for (int i = left; i <= right; i++)
		{
			Array2[top][i] = num--;
		}
		top++;

		if (left <= right)
		{
			for (int i = top; i <= bottom; i++)
			{
				Array2[i][right] = num--;
			}
			right--;
		}

		if (top <= bottom)
		{
			for (int i = right; i >= left; i--)
			{
				Array2[bottom][i] = num--;
			}
			bottom--;
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
