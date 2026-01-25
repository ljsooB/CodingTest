#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> tri;

	while (true)
	{
		tri.clear();

		for (int i = 0; i < 3; i++)
		{
			int n;

			cin >> n;

			tri.push_back(n);
		}

		if (0 == tri[0] && 0 == tri[1] && 0 == tri[2])
		{
			return 0;
		}

		int max = 0;
		int max_idx = 0;

		for (size_t i = 0; i < tri.size(); i++)
		{
			if (max < tri[i])
			{
				max = tri[i];
				max_idx = i;
			}
		}

		int two_sum = 0;
		for (size_t i = 0; i < tri.size(); i++)
		{
			if (max_idx == i)
			{
				continue;
			}

			two_sum += tri[i];
		}

		if (max >= two_sum)
		{
			cout << "Invalid" << endl;

			continue;
		}

		if (tri[0] == tri[1] && tri[0] == tri[2] && tri[1] == tri[2])
		{
			cout << "Equilateral" << endl;
		}
		else if (tri[0] == tri[1] || tri[0] == tri[2] || tri[1] == tri[2])
		{
			cout << "Isosceles" << endl;
		}
		else
		{
			cout << "Scalene" << endl;
		}
	}
}