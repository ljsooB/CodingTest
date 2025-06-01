#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (int i = 0; i < s.length(); i++)
    {
        
        if (s[i] == ' ')
        {
            answer+= ' ';
        }
        else if (s[i] <= 'Z')
        {
            if (s[i] + n > 'Z')
            {
                answer += s[i] + n - 26;
            }
            else
            {
                answer += s[i] + n;
            }
        }
        else if (s[i] <= 'z')
        {
            if (s[i] + n > 'z')
            {
                answer += s[i] + n - 26;
            }
            else
            {
                answer += s[i] + n;
            }
        }
    }
    
    return answer;
}