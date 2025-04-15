#include <iostream>

using namespace std;

int main()
{
	int Array2[10][10] = { 0 };
	int x, y;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> Array2[i][j];
		}
	}

	x = 1;
	y = 1;

	while (Array2[x][y] != 2)
	{
		Array2[x][y] = 9;
		if (Array2[x][y + 1] != 1)
		{
			y++;
		}
		else if (Array2[x + 1][y] != 1)
		{
			x++;
		}
		else
		{
			break;
		}
	}
	Array2[x][y] = 9;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << Array2[i][j] << " ";
		}
		cout << "\n";
	}
}
