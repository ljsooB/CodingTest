#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;

    cin >> N >> M;

    map<string, int> name_num;
    map<int, string> num_name;

    for (int i = 1; i <= N; i++)
    {
        string s;

        cin >> s;

        name_num[s] = i;
        num_name[i] = s;
    }

    for (int i = 0; i < M; i++)
    {
        string s;

        cin >> s;

        if ('0' <= s[0] && s[0] <= '9')
        {
            int num = stoi(s);

            cout << num_name[num] << "\n";
        }
        else
        {
            cout << name_num[s] << "\n";
        }
    }
}