#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <vector<int>> m1(9, vector<int>(9));

	for (int i = 0; i < m1.size(); i++)
	{
		for (int j = 0; j < m1[i].size(); j++)
		{
			cin >> m1[i][j];
		}
	}

	int row = 0, col = 0, max = -1;

	for (int i = 0; i < m1.size(); i++)
	{
		for (int j = 0; j < m1[i].size(); j++)
		{
			if (m1[i][j] > max)
			{
				max = m1[i][j];
				row = i + 1;
				col = j + 1;
			}
		}
	}

	cout << max << endl;
	cout << row << " " << col;
}