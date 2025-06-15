#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int area = brown + yellow;
    
    for (int height = 3; height <= area / 3; height++)
    {
        if (area % height != 0) continue;
        
        int width = area / height;
        
        if ((width - 2) * (height - 2) == yellow)
        {
            answer.push_back(width);
            answer.push_back(height);
            return answer;
        }
    }
    
    
    return answer;
}