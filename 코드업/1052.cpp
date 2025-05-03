#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int** array = new int* [n];
	for (int i = 0; i < n; i++)
	{
		array[i] = new int[n];
	}

	int num = 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			array[j][i] = num++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < n; i++)
	{
		delete[] array[i];
	}
	delete array;
}
