#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, num = 1;

	cin >> n >> m;

	int** Array2 = new int*[n];
	for (int i = 0; i < n; i++)
	{
		Array2[i] = new int[m];
	}

	int r = 0;

	for (int c = 0; c < n + m - 1; c++)
	{
		int temp_c = c;
		if (c > m - 1)
		{
			temp_c = m - 1;
			r++;
		}

		int temp_r = r;

		while (temp_c >= 0)
		{
			//cout << temp_r << temp_c << " ";
			Array2[temp_r][temp_c] = num;
			num++;
			temp_r++;
			temp_c--;

			if (temp_r > n - 1)
			{
				break;
			}
		}
		//cout << "\n";
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
