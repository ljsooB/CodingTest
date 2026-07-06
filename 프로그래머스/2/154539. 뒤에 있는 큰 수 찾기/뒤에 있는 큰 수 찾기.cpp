#include <string>
#include <vector>
#include <stack>

struct info
{
    int idx;
    int num;
};

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size(), -1);
    
    stack<info> s;
    
    for(size_t i = 0; i < numbers.size(); i++)
    {   
        while(s.size())
        {
            info in = s.top();
            
            if(in.num < numbers[i])
            {              
                answer[in.idx] = numbers[i];
                
                s.pop();
            }
            else
            {
                break;
            }
        }
        
        info in;
            
        in.idx = i;
        in.num = numbers[i];
            
        s.push(in);
    }
    
    return answer;
}