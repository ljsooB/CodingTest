#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, x, y;
	int s[100][100] = { 0 };

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		x--;
		y--;

		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				s[j][k] = 1;
			}
		}
	}

	int e = 0;

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (s[i][j] == 1)
			{
				e++;
			}
		}
	}

	cout << e;
}