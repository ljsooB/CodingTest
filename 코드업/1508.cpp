#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, k, num = 1, Array[20][20];

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> k;
		for (int j = 0; j < num; j++)
		{
			if (j == 0)
			{
				Array[i][j] = k;
				cout << Array[i][j] << " ";
			}
			else
			{
				if (i > 0)
				{
					Array[i][j] = Array[i][j - 1] - Array[i - 1][j - 1];
					cout << Array[i][j] << " ";
				}
			}
		}
		num++;
		cout << "\n";
	}
}
