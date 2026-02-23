#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> v;
    v.reserve(N); // (선택) 재할당 줄이기

    for (int i = 0; i < N; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end());

    for (int x : v) {
        cout << x << '\n'; // endl 금지
    }
}