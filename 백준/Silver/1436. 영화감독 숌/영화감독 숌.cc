#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int name = 666;

	int cnt = 0;
	while (true)
	{
		string s = to_string(name);

		if (s.find("666") != string::npos)
		{
			cnt++;
		}

		if (cnt == n)
		{
			cout << name << endl;

			return 0;
		}

		name++;
	}
}