#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string s = to_string(n);
    for (int i = 0; i < s.length()-1; i++)
    {
        for (int j = 0; j < s.length()-1; j++)
        {
            if (s[j] < s[j+1])
            {
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    answer = stol(s);
    return answer;
}