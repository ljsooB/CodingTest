#include <string>
#include <vector>
#include <algorithm>

#include <iostream>

using namespace std;

// 1. h 이상 인용된 논문이 h편 이상
// 2. 나머지 논문이 h번 이하 인용
// 1, 2 을 모두 만족하는 원소를 찾으면 됨.

int solution(vector<int> citations) {
    
    sort(citations.rbegin(), citations.rend());

    int answer = 0;

    for (size_t i = 0; i < citations.size(); i++) 
    {
        int h = i + 1;

        if (citations[i] >= h) 
        {
            answer = h;
        }
    }

    return answer;
}