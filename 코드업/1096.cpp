#include <iostream>
using namespace std;

int main()
{
	int Array2[19][19] = { 0 };
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num1, num2;
		cin >> num1 >> num2;

		Array2[num1 - 1][num2 - 1] = 1;
	}
	
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			cout << Array2[i][j] << " ";
		}
		cout << endl;
	}
}
