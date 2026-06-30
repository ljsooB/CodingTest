#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string normalize(string str)
{
    string s = "";
    for(size_t i = 0; i < str.size(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
        
        s+=str[i];
    }

    cout << s << endl; 
    return s;
}

vector<string> splite_str(string str)
{
    vector<string> v;
    
    string s = "";
    bool is_alph = true;
    for(size_t i = 0; i < str.length(); i++)
    {
        if(2 == s.length())
        {
            for(size_t j = 0; j < s.length(); j++)
            {
                if (!((s[j] >= 65 && s[j] <= 90) ||
                      (s[j] >= 97 && s[j] <= 122)))
                {
                    is_alph = false;
                }
            }
            
            if (is_alph)
            {
                v.push_back(s);
            }
                
            is_alph = true;
            s = str[i-1];
        }
        
        s+=str[i];
    }
    
    if(2 == s.length())
        {
            for(size_t j = 0; j < s.length(); j++)
            {
                if (!((s[j] >= 65 && s[j] <= 90) ||
                      (s[j] >= 97 && s[j] <= 122)))
                {
                    is_alph = false;
                }
            }
            
            if (is_alph)
            {
                v.push_back(s);
            }
    }
    
    for(size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    cout << endl;
    
    return v;
}

int solution(string str1, string str2) {
    
    str1 = normalize(str1);
    str2 = normalize(str2);
    
    vector<string> v1 = splite_str(str1);
    vector<string> v2 = splite_str(str2);
    
    if(0 == v1.size() && 0 == v2.size())
    {
        return 65536;
    }
    
    int uni = v1.size() + v2.size();
    int inter = 0;
    
    for(size_t i = 0; i < v1.size(); i++)
    {
        if (v2.end() != find(v2.begin(), v2.end(), v1[i]) )
        {
            v2.erase(find(v2.begin(), v2.end(), v1[i]));
            
            inter++;
        }
    }
    
    if (0 == inter)
    {
        return 0;
    }
        
    double jac = (double)inter / (uni - inter) * 65536;
    
    cout << jac << endl;
    
    int j = jac;
    
    return j;
}