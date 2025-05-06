#include <iostream>
using namespace std;

int main()
{
	int Array[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> Array[i];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (Array[i] > Array[j])
			{
				int temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
		}
	}

	for (int j = 0; j < 3; j++)
	{
		cout << Array[j] << " ";
	}
}
