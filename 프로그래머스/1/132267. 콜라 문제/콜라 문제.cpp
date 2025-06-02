#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while (n / a != 0)
    {
        if (n % a == 0)
        {
            answer += n / a * b;
            n = n / a * b;
        }
        else
        {
            answer += n / a * b;
            int temp = n % a;
            n = n / a * b;
            n += temp;
            
        }
    }
    
    return answer;
}