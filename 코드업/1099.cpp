#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int Array2[10][10] = { 0 };
	int j;

	for (int i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			cin >> Array2[i][j];
		}
	}

	j = 1;

	for (int i = 1; i < 9; i++)
	{
		for (j ; j < 9; j++)
		{
			if (Array2[i][j] == 2)
			{
				break;
			}

			Array2[i][j] = 9;

			if (Array2[i][j + 1] == 1)
			{
				break;
			}
		}
		if (Array2[i][j] == 2)
		{
			Array2[i][j] = 9;
			break;
		}
		else if (Array2[i + 1][j] == 1 )
		{
			break;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			cout << Array2[i][j] << " ";
		}
		cout << "\n";
	}
}
