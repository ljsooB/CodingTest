#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {

    set<int> s;
    
    for (int len = 1; len <= elements.size(); len++)
    {    
        for (int i = 0; i < elements.size(); i++)
        {
            int sum = 0;

            for (int j = 0; j < len; j++) // 길이만큼 더함
            {
                sum += elements[(i + j) % elements.size()];
            }

            s.insert(sum);
        }
        
    }
    
    
    return s.size();
}