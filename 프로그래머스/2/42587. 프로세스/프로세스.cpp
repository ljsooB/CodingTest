#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;

    while (1)
    {
        if (location == 0) // 내가 찾는게 맨 앞에 있을 때
        {
            int maxPrioritie = *max_element(priorities.begin(), priorities.end());

            if (maxPrioritie == priorities[0])
            {
                answer++;
                break;
            }
            else
            {
                priorities.push_back(priorities[0]);
                priorities.erase(priorities.begin());
                location = priorities.size() - 1;
                continue;
            }
        }
        

        if (priorities[0] == *max_element(priorities.begin(), priorities.end()))
        {
            priorities.erase(priorities.begin());
            answer++;
            location--;
        }
        else
        {
            priorities.push_back(priorities[0]);
            priorities.erase(priorities.begin());
            location--;
        }

    }

    return answer;
}