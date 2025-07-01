#include <string>
#include <vector>
#include<algorithm>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;

    vector<int> v(bridge_length, 0);

    int i = 0;
    while (!v.empty())
    {
        if (i > v.size())
        {
            i = v.size();
        }

        int totalWeight = 0;
        for (int j = 0; j < i; j++)
        {
            totalWeight += v[j]; // 다리 위 트럭 무게 총 합
        }

        if (!truck_weights.empty())
        {
            if (totalWeight + *truck_weights.begin() <= weight) // 새로운 트럭 투입 가능
            {
                v.pop_back(); // 맨 뒤 삭제
                if (!truck_weights.empty())
                {
                    v.insert(v.begin(), *truck_weights.begin()); // 맨 앞에 투입
                    truck_weights.erase(truck_weights.begin()); // 투입했으니 트럭 벡터에서 맨 앞 삭제    
                }
                else // 새로운 트럭이 없을 경우
                {
                    v.pop_back(); // 맨 뒤 삭제
                }

            }
            else
            {
                v.pop_back(); // 맨 뒤 삭제 
                if (!truck_weights.empty())
                {
                    totalWeight = 0;
                    for (int j = 0; j < v.size(); j++)
                    {
                        totalWeight += v[j]; // 다리 위 트럭 무게 총 합
                    }

                    if (totalWeight + *truck_weights.begin() <= weight) // 새로운 트럭 투입 가능
                    {
                        if (!truck_weights.empty())
                        {
                            v.insert(v.begin(), *truck_weights.begin()); // 맨 앞에 투입
                            truck_weights.erase(truck_weights.begin()); // 투입했으니 트럭 벡터에서 맨 앞 삭제    
                        }
                        else // 새로운 트럭이 없을 경우
                        {
                            v.pop_back(); // 맨 뒤 삭제
                        }
                    }
                    else
                    {
                        v.insert(v.begin(), 0); // 아무 것도 삽입할 수 없으니 무게 0 삽입
                    }
                }
            }
        }
        else
        {
            bool isDone = true;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] != 0)
                {
                    isDone = false;
                    break;
                }
            }

            if (isDone)
            {
                return answer;
            }

            v.pop_back(); // 맨 뒤 삭제 
            if (!truck_weights.empty())
            {
                v.insert(v.begin(), 0); // 아무 것도 삽입할 수 없으니 무게 0 삽입
            }
        }

        i++;
        answer++;
    }

    return answer;
}