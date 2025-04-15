#include <iostream>
#include <list>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string SSen;
	list<char> lSen;
	int num;
	char W,WW;

	cin >> SSen;

	for (int i = 0; i < SSen.size(); i++)
	{
		lSen.push_back(SSen[i]);
	}

	list<char>::iterator it = lSen.end();

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> W;

		if (W == 'L')
		{
			if (it != lSen.begin())
			{
				it--;
			}
		}
		else if (W == 'D')
		{
			if (it != lSen.end())
			{
				it++;
			}
		}
		else if (W == 'B')
		{
			if (it != lSen.begin())
			{
				it--;
				it = lSen.erase(it);
			}
		}
		else if (W == 'P')
		{
			cin >> WW;
			lSen.insert(it, WW);
		}
	}

	for (char word : lSen)
	{
		cout << word;
	}
}