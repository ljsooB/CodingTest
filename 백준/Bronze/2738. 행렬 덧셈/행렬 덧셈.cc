#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector<vector<int>> m1(N, vector<int>(M));
	vector<vector<int>> m2(N, vector<int>(M));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> m1[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> m2[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << m1[i][j] + m2[i][j] << " ";
		}

		cout << endl;
	}
}