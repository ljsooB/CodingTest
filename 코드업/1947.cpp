#include <iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;

	int row = n / 2;

	int** Array2 = new int*[row];

	for (int i = 0; i < row; i++)
	{
		Array2[i] = new int[2];

		for (int j = 0; j < 2; j++)
		{
			cin >> Array2[i][j];
		}
	}

	for (int i = 0; i < row; i++)
	{
		if (Array2[i][0] > Array2[i][1])
		{
			cout << Array2[i][0] << " ";
		}
		else
		{
			cout << Array2[i][1] << " ";
		}
	}

	for (int i = 0; i < row; i++)
	{
		delete[] Array2[i];
	}

	delete[] Array2;
	Array2 = nullptr;
}
