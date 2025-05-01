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

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> Array2[i][j];
		}
	}

	int** Array22 = new int* [n];
	for (int i = 0; i < n; i++)
	{
		Array22[i] = new int[m];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			Array22[i][j] = Array2[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			Array22[i][j + 1] += Array22[i][j];
		}
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j == 0)
			{
				Array22[i + 1][j] += Array22[i][j];
			}
			else
			{
				Array22[i + 1][j] += Array22[i][j];
			}
		}
	}
	

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << Array22[i][j] << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < n; i++)
	{
		delete[] Array22[i];
	}
	delete[] Array22;
	Array22 = nullptr;

	for (int i = 0; i < n; i++)
	{
		delete[] Array2[i];
	}
	delete[] Array2;
	Array2 = nullptr;

}
