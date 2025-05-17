#include <iostream>
#include <queue>

using namespace std;

#define X first
#define Y second

int board[500][500];
bool vis[500][500];

int main()
{
	queue<pair<int, int>> Q;
	int n, m, Area = 0, tArea = 0, pCount = 0;
	int dx[4] = { -1, 0, 1, 0 };
	int dy[4] = { 0, 1, 0, -1 };

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 1 && vis[i][j] == 0)
			{
				vis[i][j] = 1;
				Q.push({ i, j });
				tArea = 1;
				while (!Q.empty())
				{
					pair<int, int> cur = Q.front();
					Q.pop();

					for (int dir = 0; dir < 4; dir++)
					{
						int tx = cur.X + dx[dir];
						int ty = cur.Y + dy[dir];
						if (tx < 0 || tx >= n || ty < 0 || ty >= m) continue;
						if (vis[tx][ty] || board[tx][ty] != 1) continue;
						else if (vis[tx][ty] == 0 || board[tx][ty] == 1)
						{
							tArea++;
						}
						vis[tx][ty] = 1;
						Q.push({ tx, ty });

					}
				}

				if (tArea > Area)
				{
					Area = tArea;
				}
				pCount++;
			}
		}
	}

	cout << pCount << "\n" << Area;
}