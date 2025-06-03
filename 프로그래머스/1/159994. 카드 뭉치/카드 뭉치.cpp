#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    vector<string> v;
    
    for(int i = 0; i < goal.size(); i++)
    {
        if (cards1[0] == goal[i])
            {
                v.push_back(cards1[0]);
                cards1.erase(cards1.begin());
            }
        
        if (cards2[0] == goal[i])
            {
                v.push_back(cards2[0]);
                cards2.erase(cards2.begin());
            }
    }
    
    if (v.size() == goal.size())
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != goal[i])
            {
                answer = "No";
                return answer;
            }
        }
    }
    else
    {
        answer = "No";
        return answer;
    }
    
    answer = "Yes";
    return answer;
}