#include <vector>
#include <iostream>
using namespace std;

bool is_prime(int num)
{
    if (2 > num)
    {
        return false;
    }
    
    for (int i = 2; i <= num / i; i++)
    {
        if(0 == num % i)
        {
            return false;
        }
    }
    
    return true;
}

void dfs(vector<int> nums, int start, int count, int sum, int& answer)
{
    if(3 == count)
    {
        if(is_prime(sum))
        {
            answer++;
        }
        
        return;
    }

    for(size_t i = start; i < nums.size(); i++)
    {
        dfs(nums, i+1, count + 1, sum + nums[i], answer);
    }
}

int solution(vector<int> nums) {
    int answer = 0;

    dfs(nums, 0, 0, 0, answer);
    
    return answer;
}