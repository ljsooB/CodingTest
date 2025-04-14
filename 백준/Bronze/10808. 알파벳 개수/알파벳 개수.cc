#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string Sen;
	int Word[26] = { 0 };

	cin >> Sen;

	for (int i = 0; i < Sen.size(); i++)
	{
		Word[Sen[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << Word[i] << " ";
	}
}