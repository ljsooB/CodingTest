#include <iostream>

using namespace std;

int main()
{
    int V, A, B;
    int d = 1;

    cin >> A >> B >> V;

    d += (V - A) / (A - B);

    if ((V - A) % (A - B) != 0)
    {
        d++;
    }

    if (A >= V)
    {
        cout << "1";
    }
    else
    {
        cout << d;
    }

}