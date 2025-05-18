#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string sBase3Reverse;
    
    while (n > 0)
    {
        sBase3Reverse += to_string(n % 3);
        n /= 3;
    }
    
    int digits = 1;
    for (int i = sBase3Reverse.length() - 1; i >= 0; i--)
    {
        answer += (sBase3Reverse[i] - '0') * digits;
        digits *= 3;
    }
    
    return answer;
}