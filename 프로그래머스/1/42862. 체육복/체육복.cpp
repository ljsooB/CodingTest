#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    int answer = n - lost.size();

    int i = 0;
    while(i < reserve.size())
    {
        vector<int>::iterator it = std::find(lost.begin(), lost.end(), reserve[i]);
        if (it != lost.end())
        {
            lost.erase(it);
            reserve.erase(reserve.begin() + i);
            i = 0;
            answer++;
            continue;
        }
        i++;
    }

    for (int i = 0; i < reserve.size(); i++)
    {
        int j = 0;
        while(j < lost.size())
        {
            if(reserve[i] - 1 == lost[j]) // 앞 번호한테 주기
            {
                lost.erase(lost.begin() + j);
                answer++;
                break;
            }
            if (reserve[i] + 1 == lost[j])
            {
                lost.erase(lost.begin() + j);
                answer++;
                break;
            }
            j++;
        }
    }

    return answer;
}
