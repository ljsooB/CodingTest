#include <iostream>
#include <string>
using namespace std;

int main()
{
	string Sen;

	cin >> Sen;

	for (int i = 0; i < Sen.size(); i++)
	{
		cout << "'" << Sen[i] << "'" << endl;
	}
}
