#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <iostream>

using namespace std;

/*
1. s의 길이만큼 반복
2. s를 스택에 넣고 완벽한 괄호인지 테스트
3. 맨 앞에 있는 것을 빼서 맨 뒤로
*/

bool is_perfect(string s)
{
    stack<char> st;
    for(size_t i = 0; i < s.length(); i++)
    {
        switch(s[i])
        {
            case ')':
                if(st.size())
                {
                    if(st.top() == '(')
                        st.pop();
                    else
                        return false;   
                }
                else
                    return false;
                
                break;
                
            case ']':
                if(st.size())
                {
                    if(st.top() == '[')
                        st.pop();
                    else
                        return false;   
                }
                else
                    return false;
                
                break;
                
            case '}':
                if(st.size())
                {
                    if(st.top() == '{')
                        st.pop();
                    else
                        return false;   
                }
                else
                    return false;
                
                break;
            case '(':
            case '[':
            case '{':
                st.push(s[i]);
                    
                break;
        }
    }
    
    if(st.empty())
        return true;
    else
        return false;
}

int solution(string s) {
    int answer = 0;
    
    for(size_t i = 0; i <s.length(); i++)
    {
        string temp = s;
        rotate(temp.begin(), temp.begin() + i, temp.end());
        
        if(is_perfect(temp))
        {
            answer++;
        }
    }
    
    return answer;
}