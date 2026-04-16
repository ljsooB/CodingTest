#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    string l_word = words[0];
    vector<string> dic;
    
    dic.push_back(words[0]);
    
    for(size_t i = 1; i < words.size(); i++)
    {
        char l_c = l_word[l_word.length() - 1];
        
        if(l_c != words[i][0])
        {
            
            int m = (i + 1) % n;
            if (m == 0 )
            {
                m = n;
            }
            
            answer.push_back(m);
            answer.push_back(i / n + 1);
            
            return answer;
        }
        
        if(dic.end() != find(dic.begin(), dic.end(), words[i]))
        {
            int m = (i + 1) % n;
            if (m == 0 )
            {
                m = n;
            }
            
            answer.push_back(m);
            answer.push_back(i / n + 1);
            
            return answer;
        }
        
        dic.push_back(words[i]);
        l_word = words[i];
    }
    
    
    answer.push_back(0);
    answer.push_back(0);
    
    return answer;
}