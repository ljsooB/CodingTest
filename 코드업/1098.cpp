#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	//cin.tie(0);

	int h, w, n; // 높이, 너비, 입력 개수
	int l, d, x, y; // 막대 길이, 방향, 시작 위치

	cin >> h >> w;

	int** Array2 = new int* [h];

	for (int i = 0; i < h; i++)
	{
		Array2[i] = new int[w];
		for (int j = 0; j < w; j++)
		{
			Array2[i][j] = 0;
		}
	}

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> l >> d >> x >> y;

		if (d == 0) // 가로 방향
		{
			for (int i = 0; i < l; i++)
			{
				Array2[x -1][y + i -1] = 1;
			}
		}
		else // 세로 방향
		{
			for (int i = 0; i < l; i++)
			{
				Array2[x + i - 1][y - 1] = 1;
			}
		}
	}

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << Array2[i][j] << " ";
		}
		cout << "\n";
	}


	for (int i = 0; i < h; i++)
	{
		delete[] Array2[i];
	}

	delete[] Array2;
	Array2 = nullptr;
}
