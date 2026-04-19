#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

// 1. 시작점으로 부터 반복 횟수가 number보다 작으면 안됨
// 2. map으로 지정?

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    int all_cnt = 0;
    map<string, int> mapping_want;
    
    for(size_t i = 0; i < want.size(); i++)
    {
        mapping_want[want[i]] = number[i];
        
        all_cnt += number[i];
    }
    
    for(size_t i = 0; i < discount.size() - all_cnt + 1; i++)
    {
        int temp = all_cnt;
        map<string, int> map_temp = mapping_want;
        
        for(size_t j = i; j < i + 10; j++)
        {
            if(map_temp.end() != map_temp.find(discount[j]))
            {
                map_temp[discount[j]]--;
                
                temp--;
            }
        }
        
        bool is_satisfied = true;
        for(size_t j = 0; j < want.size(); j++)
        {
            if(map_temp[want[j]] > 0)
            {
                is_satisfied = false;
            }
        }
                             
        if(is_satisfied)
        {
            answer++;
        }
    }
    
    return answer;
}