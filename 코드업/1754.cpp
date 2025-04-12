#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Sen1, Sen2;

	cin >> Sen1 >> Sen2;

	if (Sen1.size() > Sen2.size())
	{
		cout << Sen2 << " " << Sen1;
	}
	else if (Sen1.size() < Sen2.size())
	{
		cout << Sen1 << " " << Sen2;
	}
	else
	{
		for (int i = 0; i < Sen1.size(); i++)
		{
			if (Sen1[i] > Sen2[i])
			{
				cout << Sen2 << " " << Sen1;
				break;
			}
			else if (Sen1[i] < Sen2[i])
			{
				cout << Sen1 << " " << Sen2;
				break;
			}
		}
	}
}
