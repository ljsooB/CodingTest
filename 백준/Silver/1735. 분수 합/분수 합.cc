#include <iostream>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int num1, den1;
    int num2, den2;

    cin >> num1 >> den1 >> num2 >> den2;

    int common_den = den1 * den2;

    int new_num1 = num1 * den2;
    int new_num2 = num2 * den1;

    int numerator = new_num1 + new_num2;
    int denominator = common_den;

    int a = numerator;
    int b = denominator;

    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    int gcd = a;

    numerator /= gcd;
    denominator /= gcd;

    cout << numerator << " " << denominator;
}