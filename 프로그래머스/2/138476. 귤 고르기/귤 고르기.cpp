#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    map<int, int> m;
    for(int i = 0; i < tangerine.size(); i++)
    {
        m[tangerine[i]]++;
    }
    
    sort(tangerine.begin(), tangerine.end(), [&](int a, int b) {
        if (m[a] != m[b])
            return m[a] > m[b];
        else
            return a < b;
    });

    vector<int> temp;
    for (int i = 0; i < tangerine.size(); i++) {
        temp.push_back(tangerine[i]);
        if (temp.size() == k) {
            break;
        }
    }

    set<int> s;
    for (int v : temp) {
        s.insert(v);
    }

    answer = s.size();
    
    return answer;
}