#include <iostream>
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;

    long long a = A, b = B;

    while (b != 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }

    long long gcd = a;
    cout << A * B / gcd;
}