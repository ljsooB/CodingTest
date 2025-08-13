#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {
    int answer = 1;
    
    bool end = false;
    while(1)
    {
        bool divided = false;
        int maxEle = *max_element(arr.begin(), arr.end());
        if (maxEle > 1)
        {
            for (int i = 2; i <= maxEle; i++)
            {
                int divideNum = 0;
                for(auto v : arr)
                {
                    if (v % i == 0)
                    {
                        divideNum++;
                    }
                }

                if (divideNum >= 2)
                {
                    divided = true;
                    for(int j = 0; j < arr.size(); j++)
                    {
                        if (arr[j] % i == 0)
                        {
                            arr[j] /= i;
                        }
                    }
                    answer *= i;
                    break;
                }
            }
            
            if (!divided)
            {
                break;
            }
        }
        else
        {
            break;
        }
        
    }
    for (auto v : arr)
    {
        answer *= v;
    }
    
    return answer;
}