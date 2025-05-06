#include <iostream>
using namespace std;

int main()
{
	int N, Array[10000];
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> Array[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (Array[j] > Array[j + 1])
			{
				int temp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << Array[i] << "\n";
	}
}
