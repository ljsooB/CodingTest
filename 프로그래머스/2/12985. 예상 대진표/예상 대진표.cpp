#include <iostream>

using namespace std;

int divde_2(int x)
{
    if(x % 2 == 0)
    {
        return x / 2;
    }
    else
    {
        return (x / 2) + 1;
    }
}

int solution(int n, int a, int b)
{
    int answer = 0;

    while(a != b)
    {
        a = divde_2(a);
        b = divde_2(b);
        
        answer++;
    }

    return answer;
}