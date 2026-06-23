#include <iostream>
#include <map>
using namespace std;


int main()
{
	map<int, int> chess = { {0, 1}, {1, 1}, {2, 2}, {3, 2}, {4, 2}, { 5, 8 } };

	int w_chess[6];

	for (int i = 0; i < 6; i++)
	{
		cin >> w_chess[i];
	}

	for (int i = 0; i < 6; i++)
	{
		if (w_chess[i] > chess[i])
		{
			cout << -(w_chess[i] - chess[i]) << " ";
		}
		else if (w_chess[i] == chess[i])
		{
			cout << 0 << " ";
		}
		else
		{
			cout << chess[i] - w_chess[i] << " ";
		}
	}
}