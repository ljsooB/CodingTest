#include <iostream>
using namespace std;

int main()
{
	int n, num = 1;

	cin >> n;

	int** Array2 = new int* [n];

	for (int i = 0; i < n; i++)
	{
		Array2[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			Array2[i][j] = num;
			num++;
			cout << Array2[i][j] << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < n; i++)
	{
		delete[] Array2[i];
	}

	delete[] Array2;
	Array2 = nullptr;
}
