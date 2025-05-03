#include <iostream>
using namespace std;

int main()
{
	int n, g, k;
	int array[100] = { 0 };

	cin >> n >> g;

	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < n; i += g)
	{
		int max = array[i];
		for (int j = i + 1; j < n && j < i + g; j++)
		{
			if (max < array[j])
			{
				max = array[j];
			}
		}
		cout << max << " ";
	}
}
