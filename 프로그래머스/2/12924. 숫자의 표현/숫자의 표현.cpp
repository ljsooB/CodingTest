#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    
    int answer = 0;
    
    for(int i = 1; i <= n; i++)
    {
        int temp = i;
        for (int j = i + 1; j <= n + 1; j++)
        {
            if (temp + j <= n)
            {
                temp+=j;
            }
            else if (temp == n)
            {
                answer++;
                break;
            }
            else
            {
                break;
            }
        }
    }
    
    return answer;
}