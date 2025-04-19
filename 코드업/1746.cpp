#include <iostream>
using namespace std;

int main()
{
	int n, m, num = 1;

	cin >> n >> m;

	int** Array2 = new int* [n];
	for (int i = 0; i < n; i++)
	{
		Array2[i] = new int[m];
	}

	int j = 0;

	for (int i = 0; i < n + m - 1; i++)
	{
		int temp_i = i;
		if (temp_i > n - 1)
		{
			temp_i = n - 1;
			j++;
		}

		int temp_j = j;

		while (temp_i >= 0)
		{
			Array2[temp_i][temp_j] = num;
			num++;

			temp_i--;
			temp_j++;

			if (temp_j > m - 1) 
			{ 
				break; 
			}
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
