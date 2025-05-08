#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = n % 10;
    while (n /= 10)
    {
        answer += n % 10;
    }
    

    return answer;
}