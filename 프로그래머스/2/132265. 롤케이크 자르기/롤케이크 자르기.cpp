#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int solution(vector<int> topping) 
{
    int answer = 0;
    
    unordered_set<int> l;
    unordered_map<int, int> r;
    int r_kind = 0;
    
    for(size_t i = 0; i < topping.size(); i++)
    {
        int x = topping[i];
        
        r[x]++;
    }
    
    r_kind = r.size();
    
    for(int x : topping)
    {
        l.insert(x);
        
        r[x]--;
        
        if(r[x] == 0)
        {
            r_kind--;
        }
        
        if(r_kind == l.size())
        {
            answer++;
        }
    }
    
    return answer;
}