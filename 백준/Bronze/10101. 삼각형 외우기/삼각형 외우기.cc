#include <iostream>

using namespace std;

int main()
{
	int n1, n2, n3;

	cin >> n1 >> n2 >> n3;

	if (60 == n1 && 60 == n2 && 60 == n3)
	{
		cout << "Equilateral";

		return 0;
	}

	if (180 == n1 + n2 + n3)
	{
		if (n1 == n2 || n1 == n3 || n2 == n3)
		{
			cout << "Isosceles";
		}
		else
		{
			cout << "Scalene";
		}
	}
	else
	{
		cout << "Error";
	}
}