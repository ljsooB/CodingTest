#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;

	cin >> T;

	for (int c = 0; c < T; c++)
	{
		int A, B;

		cin >> A >> B;

		if (A > B)
		{
			int t = A;
			A = B;
			B = t;
		}

		int ans = 1;
		bool is_divided;
		while (true)
		{
			is_divided = false;

			for (int i = 2; i <= A; i++)
			{
				if (A % i == 0 && B % i == 0)
				{
					A = A / i;
					B = B / i;

					ans *= i;

					is_divided = true;

					break;
				}
			}

			if (false == is_divided)
			{
				break;
			}
		}

		ans = ans * A * B;

		cout << ans << endl;
	}
}