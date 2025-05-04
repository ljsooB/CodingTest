#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int Array[11][10], res;

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> Array[i][j];
		}
	}

	for (int j = 0; j < 10; j++)
	{
		if (Array[10][j] == 0)
		{
			continue;
		}
		res = 0;

		for (int i = 9; i >= 0; i--)
		{
			if (Array[i][j] != 0)
			{
				res = Array[i][j];
				break;
			}
		}

		if (res == 0)
		{
			cout << j + 1 << " safe" << "\n";
		}
		else if (res > 0)
		{
			cout << j + 1 << " crash" << "\n";
		}
		else
		{
			cout << j + 1 << " fall" << "\n";
		}
	}
}
