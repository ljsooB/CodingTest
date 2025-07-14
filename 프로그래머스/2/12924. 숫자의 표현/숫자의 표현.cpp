#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n) {
    int answer = 0;
    int sum = 0;
    queue<int> q;
    
    for (int i = 1; i <= n; i++)
    {
        sum+= i;
        q.push(i);
        
        if(sum > n) 
        {
            while(sum > n) 
            {
                sum -= q.front();
                q.pop();
            }
        }

        if(sum == n) 
        {
            answer++;
            sum -= q.front();
            q.pop();
        }
    }
    
    return answer;
}