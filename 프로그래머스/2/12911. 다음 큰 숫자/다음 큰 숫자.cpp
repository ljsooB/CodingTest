#include <string>
#include <vector>
#include <iostream>

using namespace std;

int binary(int n)
{
    int countOne = 0;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            countOne++;
        }
        n /= 2;
    }
    
    return countOne;
}

int solution(int n) {
    int answer = 0;
    
    answer = n + 1;
    while(1)
    {
        if (binary(n) == binary(answer))
        {
            return answer;
        }
        answer++;
    }
    
    
    return answer;
}