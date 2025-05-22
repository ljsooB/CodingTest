#include <bits/stdc++.h>
using namespace std;

char trinangle[150][150];

void Output(int n)
{
	if (n == 1)
	{
		cout << "*" << "\n";
		return;
	}
	else
	{
		cout << "*";
		Output(n - 1);
	}
}

void triangle(int n)
{
	if (n == 0)
	{
		return;
	}
	triangle(n - 1);
	Output(n);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	triangle(n);
	


}
