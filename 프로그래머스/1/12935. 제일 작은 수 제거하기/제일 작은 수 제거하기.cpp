#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int min = 9999;
    
    if (arr.size() == 1)
    {
        answer.push_back(-1);
    }
    else
    {
        for (int i : arr)
        {
            if (min > i)
            {
                min = i;
            }
        }
        arr.erase(remove(arr.begin(), arr.end(), min), arr.end());
        answer = arr;
    }
    return answer;
}