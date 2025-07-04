#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    
    
    int limit = number.length() - k;
    int idx = 0;
    for (int i = 0; i < limit; i++)
    {
        char maxDigit = '0';
        int maxIdx = idx;
        for(int j = idx; j <= k + i; j++)
        {
            if(number[j] > maxDigit)
            {
                maxDigit = number[j];
                maxIdx = j;
            }
        }
        idx = maxIdx + 1;
        answer += maxDigit;
    }
    
    return answer;
}