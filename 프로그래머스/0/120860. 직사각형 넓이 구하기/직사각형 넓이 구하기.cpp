#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    int x1 = dots[0][0], y1 = dots[0][1];
    int x2 = 0, y2 = 0;
    int x3 = 0, y3 = 0;
    
    for(int i = 1; i < dots.size(); i++)
    {
        for(int j = 1; j < dots[i].size(); j++)
        {
            if(dots[i][0] == x1)
            {
                x2 = dots[i][0];
                y2 = dots[i][1];
            }
            else if (dots[i][1] == y1)
            {
                x3 = dots[i][0];
                y3 = dots[i][1];
            }
        }
    }
    
    answer = (y2 - y1) * (x3 - x1);
    if (answer < 0)
    {
        answer = -answer;
    }
    
    return answer;
}