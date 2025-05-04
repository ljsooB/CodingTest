#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int Array[11][10];

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> Array[i][j];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 10; j >= 0; j--)
		{
			if (Array[10][i] == 0)
			{
				break;
			}
			else if (Array[j][i] > 1 || Array[j - 1][i] == 1)
			{
				cout << i + 1 << " crash" << "\n";
				break;
			}
			else if (Array[j][i] < 0)
			{
				cout << i + 1 << " fall" << "\n";
				break;
			}

			if (j == 0)
			{
				cout << i + 1 << " safe" << "\n";
				break;
			}
		}
	}
}
