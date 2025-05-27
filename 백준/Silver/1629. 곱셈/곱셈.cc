#include <iostream>
using namespace std;

long long  A, B, C, temp;

long long mult(long long A,long long B, long long C)
{
	if (B == 0)
	{
		return  1;
	}
	temp = mult(A, B/2, C);
	temp = temp * temp % C;

	if (B % 2 == 0)
		return temp;
	else
	{
		return temp* A % C;
	}
}

int main()
{
	cin >> A >> B >> C;

	cout << mult(A, B, C);
}
