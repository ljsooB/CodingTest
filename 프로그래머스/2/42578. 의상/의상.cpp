#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    map<string, int> type_cnt;
    
    for(size_t i = 0; i < clothes.size(); i++)
    {
        type_cnt[clothes[i][1]]++;
    }
    
    for(map<string, int>::iterator it = type_cnt.begin(); it != type_cnt.end(); it++)
    {
      answer *= (it->second + 1);   
    }
    
    
    return answer - 1; 
}