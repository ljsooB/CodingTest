#include <iostream>
using namespace std;

int main()
{
	int N, Array[100][100], num = 1;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			Array[i][j] = num++;
		}
	}

	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == 0 || i == N - 1)
			{
				sum += Array[i][j];
			}
			else if (j == 0 || j == N - 1)
			{
				sum += Array[i][j];
			}
		}
	}

	cout << sum;
}
