#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int num;
	vector<string> sens;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		string sen;

		cin >> sen;

		sens.push_back(sen);
	}
	
	int count = num;

	for (int i = 0; i < sens.size(); i++)
	{
		char c;

 		for (int j = 0; j < sens[i].length(); j++)
		{
			c = sens[i][j];
			bool is_con = true;

			for (int k = j + 1; k < sens[i].length(); k++)
			{
				if (is_con)
				{
					if (c != sens[i][k])
					{
						is_con = false;
						continue;
					}
				}

				if (!is_con)
				{
					if (c == sens[i][k])
					{
						count--;

						is_con = true;

						break;
					}
				}
			}

			if (is_con)
			{
				break;
			}
		}
	}

	cout << count;
}