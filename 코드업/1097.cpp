#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int Array2[19][19] = { 0 };
	int num, x, y;

	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			cin >> Array2[i][j];
		}
	}

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> x >> y;

		for (int j = 0; j < 19; j++)
		{
			if (Array2[x-1][j] == 0) Array2[x-1][j] = 1;
			else Array2[x-1][j] = 0;
		}

		for (int j = 0; j < 19; j++)
		{
			if (Array2[j][y-1] == 0) Array2[j][y-1] = 1;
			else Array2[j][y-1] = 0;
		}
	}

	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			cout << Array2[i][j] << " ";
		}
		cout << "\n";
	}
}
