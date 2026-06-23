#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> section) 
{
    int answer = 0;
    int sec_grp = 0;
    
    for(size_t i = 0; i < section.size(); i++)
    {
        int s = section[i];
        
        if (s > sec_grp)
        {
            answer++;
            sec_grp = s + m - 1;
        }
    }
    
    return answer;
}