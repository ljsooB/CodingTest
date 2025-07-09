#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    sort(people.begin(), people.end());
    
    int heavy = people.size() - 1, light = 0;
    
    while(1)
    {
        if (light > heavy)
        {
            break;
        }
        else if (light == heavy)
        {
            answer++;
            break;
        }
        
        if(people[heavy] + people[light] <= limit)
        {
            heavy--;
            light++;
        }
        else
        {
            heavy--;
        }
        
        answer++;
    }
    
    
    return answer;
}