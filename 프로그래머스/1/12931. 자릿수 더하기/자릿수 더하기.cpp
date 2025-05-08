#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int num = 0, digits = 1, temp = n;
   
    while (temp / 10 != 0) // 자릿수 확인
    {
        temp /= 10;
        num++;
    }

    for (int i = 0; i < num; i++)
    {
        digits *= 10;
    }

    while (digits / 10 != 0)
    {
        answer += n / digits;
        n %= digits;
        digits /= 10;
    }
    answer += n % 10;

    return answer;
}