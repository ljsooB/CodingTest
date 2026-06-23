#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string sen;
	vector<int> alpha(26, 0);

	cin >> sen;

	for (int i = 0; i < sen.length(); i++)
	{
		if (sen[i] >= 97)
		{
			alpha[sen[i] - 97]++;
		}
		else
		{
			alpha[sen[i] - 65]++;
		}
	}

	int count = 0;
	int max_num = -1;
	int max_index = 0;

	for (int i = 0; i < alpha.size(); i++)
	{
		if (max_num == alpha[i])
		{
			count++;
		}
		else if (max_num < alpha[i])
		{
			max_num = alpha[i];
			count = 0;
			max_index = i;
		}
	}

	if (count >= 1)
	{
		cout << "?";
	}
	else
	{
		cout << char(max_index + 65);
	}
}