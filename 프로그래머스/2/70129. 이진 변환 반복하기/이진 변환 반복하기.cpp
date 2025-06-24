#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int changeCount = 0, removeCount = 0;
    
    while(s.length() != 1)
    {
        string tS = "";
        for(int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                removeCount++;
                continue;
            }
            else
            {
                tS+=s[i];
            }
        }
        
        s = tS;
        int lengthS = s.length();
        
        tS = "";
        while(lengthS != 0)
        {
            if(lengthS / 2 == 0)
            {
                tS = to_string(lengthS) + tS;
                break;
            }
            else
            {
                tS = to_string(lengthS % 2) + tS;
                lengthS/=2;
            }
        }
        
        s = tS;
        changeCount++;
        
    }
    
    cout << changeCount << " " << removeCount;
    
    answer.push_back(changeCount);
    answer.push_back(removeCount);
    return answer;
}