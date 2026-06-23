#include <iostream>
#include <map>

using namespace std;



int main()
{
	map<string, int> cro = { {"c=", 1}, {"c-", 1}, {"dz=", 1}, {"d-", 1}, {"lj", 1}, {"nj", 1}, {"s=", 1}, {"z=", 1} };

	string sen;

	cin >> sen;

	int count = 0;

	bool is = false;

	for (int i = 0; i < sen.length(); i++)
	{
		is = false;
		for (auto it = cro.begin(); it != cro.end(); ++it) 
		{
			const string& key = it->first;
			
			if (sen.compare(i, key.length(), key) == 0)
			{
				i += key.length() - 1;

				count += it->second;
				
				is = true;
				break;
			}
		}

		if (!is)
		{
			count++;
		}
	}

	cout << count;
}