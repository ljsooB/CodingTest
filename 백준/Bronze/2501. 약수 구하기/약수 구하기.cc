#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int factor, num;
	vector<int>fac_num;

	cin >> factor >> num;

	for (int i = 1; i <= factor; i++)
	{
		if (factor % i == 0)
		{
			fac_num.push_back(i);
		}
	}

	if (num > fac_num.size())
	{
		cout << 0;
	}
	else
	{
		cout << fac_num[num - 1];
	}
}