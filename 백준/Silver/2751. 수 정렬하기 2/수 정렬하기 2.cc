#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> v;


    for (int i = 0; i < N; i++) 
    {
        int t;
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end());

    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
}