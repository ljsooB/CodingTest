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

	int r = 0;
	int c = m - 1;

	for (int i = 0; i < n + m - 1; i++)
	{
		int temp_r = r;

		if (i > m - 1)
		{
			r++;
			temp_r = r;
		}

		int temp_c = c;

		while (temp_c < m)
		{
			Array2[temp_r][temp_c] = num;
			num++;
			temp_r++;
			temp_c++;

			if (temp_r > n - 1)
			{
				break;
			}
		}

		c--;
		if (c <= 0)
		{
			c = 0;
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
