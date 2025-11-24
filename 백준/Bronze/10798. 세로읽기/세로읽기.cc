#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> sen(5);

	for (int i = 0; i < 5; i++)
	{
		cin >> sen[i];
	}

	int max_length = 0;

	for (int i = 0; i < 5; i++)
	{
		if (sen[i].length() > max_length)
			max_length = sen[i].length();
	}

	for (int col = 0; col < max_length; col++)
	{
		for (int row = 0; row < 5; row++)
		{
			if (col >= sen[row].size())
				continue;

			cout << sen[row][col];
		}
	}
}