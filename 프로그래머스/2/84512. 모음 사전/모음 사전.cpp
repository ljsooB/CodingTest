#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(string s, vector<string>& dict, vector<char> vowels)
{
    if(s.size())
    {
        dict.push_back(s);
    }
    
    if (5 == s.length())
    {
        return;
    }
    
    for(char c : vowels)
    {
        dfs(s+c, dict, vowels);
    }
}

int solution(string word) {
    
    vector<char> vowels = {'A', 'E', 'I', 'O', 'U'};
    vector<string> dict;
    
    dfs("", dict, vowels);
    
    return find(dict.begin(), dict.end(), word) - dict.begin() + 1;
}