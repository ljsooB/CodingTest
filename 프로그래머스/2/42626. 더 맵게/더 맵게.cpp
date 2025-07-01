#include <string>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    priority_queue<int, vector<int>, greater<int>> mH;
    
    for(int i = 0; i < scoville.size(); i++)
    {
        mH.push(scoville[i]);
    }
    
    while(mH.top() < K)
    {
        if (mH.size() < 2)
        {
            return -1;
        }
        
        int smallest = mH.top();
        mH.pop();
        int secSmallest = mH.top();
        mH.pop();
        
        int newScoville = smallest + secSmallest * 2;
        mH.push(newScoville);
        
        answer++;
    }
    
    return answer;
}