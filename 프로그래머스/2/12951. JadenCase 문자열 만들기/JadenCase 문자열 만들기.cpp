#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<string> v;
    
    string tS = "";
    
    for(int i = 0; i < s.length(); i++)
    {
      if(s[i] == ' ')
      {
          if (!tS.empty())
          {
            v.push_back(tS); // 단어 처리
            tS = "";
          }
          tS += s[i];
          v.push_back(tS); // 공백 처리
          tS = "";
          continue;
      }
        
        tS+= s[i];
    }
    
    if(!tS.empty())
    {
        v.push_back(tS);
    }
    
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == " ")
        {
            continue;
        }
        else
        {
            for (int j = 0; j < v[i].length(); j++)
            {
                if(j==0)
                {
                    v[i][j] = toupper(v[i][j]);
                }
                else
                {
                    v[i][j] = tolower(v[i][j]);
                }
            }
        }
    }
    
    for(int i = 0; i < v.size(); i++)
    {
        answer+= v[i];
    }
    
    
    return answer;
}