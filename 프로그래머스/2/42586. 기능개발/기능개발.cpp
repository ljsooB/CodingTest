#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> dayV;
    
    int i = 0;
    while (i < progresses.size())
    {
        int temp = progresses[i];
        int day = 0;
        while(temp + speeds[i] < 100)
        {
            temp+= speeds[i];
            day++;
        }
        
        dayV.push_back(day);
        i++;
    }
    
    for(int i = 0; i < dayV.size() ;)
    {
        int workCount = 1; // 작업 수 (현재 작업이 완료될 때 배포되기 때문에 1로 시작)
        int deployDay = dayV[i];
        
         int j = i + 1;
        while (j < dayV.size() && dayV[j] <= deployDay) 
        {
            workCount++;
            j++;
        }
        answer.push_back(workCount);
        i = j;
    }
    
    return answer;
}