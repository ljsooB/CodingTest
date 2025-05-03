#include <iostream>
using namespace std;

int main()
{
	int array[100];
	int n, k;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < n; i += 2)
	{
		if (array[i] > array[i + 1])
		{
			cout << array[i + 1] << " ";
		}
		else
		{
			cout << array[i] << " ";
		}
	}
}
