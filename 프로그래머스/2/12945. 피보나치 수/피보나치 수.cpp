#include <string>
#include <vector>
#include <cstring>

using namespace std;

int memo[100001];

int Fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    if (memo[n] != -1)
    {
        return memo[n];
    }
    
    memo[n] = (Fibo(n-1) + Fibo(n-2)) % 1234567 ;
    return memo[n];
}

int solution(int n) {
    int answer = 0;
    
    memset(memo, -1, sizeof(memo));
    
    answer = Fibo(n);
        
    return answer;
}