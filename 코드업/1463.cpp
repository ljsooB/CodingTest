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

	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			Array2[j][i] = num;
			num++;
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

}
