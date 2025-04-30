#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int* Array = new int[n];

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		Array[i] = num;
	}

	for (int i = 0; i < n-1; i++)
	{
		Array[i + 1] = Array[i] + Array[i + 1];
	}

	for (int i = 0; i < n; i++)
	{
		cout << Array[i] << " ";
	}

	delete[] Array;
	Array = nullptr;
}
