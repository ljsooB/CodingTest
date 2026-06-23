#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    vector<vector<int>> v;
    vector<int> t;

    int num = 0;
    bool reading = false;

    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            num = num * 10 + (s[i] - '0');
            reading = true;
        }
        else
        {
            if (reading)
            {
                t.push_back(num);
                num = 0;
                reading = false;
            }

            if (s[i] == '}')
            {
                if (!t.empty())
                {
                    v.push_back(t);
                    t.clear();
                }
            }
        }
    }
    
    for(size_t i = 0; i < v.size() - 1; i++)
    {
         for(size_t j = i + 1; j < v.size(); j++)
         {
             if(v[i].size() > v[j].size())
             {
                 vector<int> v1 = v[i];
                 v[i] = v[j];
                 v[j] = v1;
             }
         }
    }
    
    answer.push_back(v[0][0]);
    for(size_t i = 1; i < v.size(); i++)
    {
        for(size_t j = 0; j < v[i].size(); j++)
        {
            bool found = false;

            for(size_t k = 0; k < answer.size(); k++)
            {
                if(answer[k] == v[i][j])
                {
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                answer.push_back(v[i][j]);
                break;
            }
        }
    }
    
    return answer;
}