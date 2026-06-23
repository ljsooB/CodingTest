#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N, answer = 0;

	cin >> N;

	int width = 2;
	for (int i = 1; i <= N; i++)
	{
		width = width * 2 - 1;
		
		answer = int(pow(width, 2));
	}

	cout << answer;
}