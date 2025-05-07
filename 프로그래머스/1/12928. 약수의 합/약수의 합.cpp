#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    
    for (int i = 1; i <= n ; i++)
    {
        if (n % i == 0)
        {
            if (find(v.begin(), v.end(), i) == v.end())
            {
                v.push_back(i);
                answer += i;
            }
        }
    }
    
    return answer;
}