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

	int r = n - 1;
	int c = 0;

	for (int i = 0; i < n + m - 1; i++)
	{

		if (i > n - 1)
		{
			c++;
			r = 0;
		}

		int temp_c = c;
		int temp_r = r;

		while (temp_r < n)
		{
			Array2[temp_r][temp_c] = num;
			num++;

			temp_r++;
			temp_c++;

			if (temp_c > m - 1)
			{
				break;
			}
		}
		r--;
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
