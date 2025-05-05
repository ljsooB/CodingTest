#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, x, y, Array[101][101];
	cin >> N >> x >> y;
	Array[x][y] = 1;

	int value = Array[x][y];

	for (int i = x - 1; i >= 1; i--)
	{
		Array[i][y] = ++value;
	}

	value = Array[x][y];

	for (int i = x + 1; i <= N; i++)
	{
		Array[i][y] = ++value;
	}


	for (int i = 1; i <= N; i++)
	{
		value = Array[i][y];
		for (int j = y - 1; j >= 1; j--)
		{
			Array[i][j] = ++value;
		}
		value = Array[i][y];
		for (int j = y + 1; j <= N; j++)
		{
			Array[i][j] = ++value;
		}
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cout << Array[i][j] << " ";
		}
		cout << "\n";
	}
}
