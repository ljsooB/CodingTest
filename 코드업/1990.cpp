#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Sen;
	int num = 0;

	cin >> Sen;

	for (int i = 0; i < Sen.size(); i++)
	{
		num += Sen[i];
	}

	if (num % 3 == 0)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
}
