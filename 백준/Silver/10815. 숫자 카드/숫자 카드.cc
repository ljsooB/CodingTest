#include <iostream>
#include <cstdlib>

using namespace std;

struct card
{
    bool nn;
    bool pn;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    card* arry = new card[10000001]();

    int n, m;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        int a = abs(t);

        if (t < 0)
        {
            arry[a].nn = true;
        }
        else
        {
            arry[a].pn = true;
        }
    }

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;

        int a = abs(t);

        if (t < 0)
        {
            if (arry[a].nn == true)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        else
        {
            if (arry[a].pn == true)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
    }

    delete[] arry;

    return 0;
}