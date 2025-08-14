#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    
    vector<int> v(n + 1, 0);
    v[1] = 1;
    v[2] = 2;
    
    for(int i = 3; i <= n; i++)
    {
        v[i] = (v[i-2] + v[i-1]) % 1234567;
    }
    
    answer = v[n];
    
    return answer;
}