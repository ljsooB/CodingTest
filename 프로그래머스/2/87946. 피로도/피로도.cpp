#include <string>
#include <vector>

using namespace std;
bool isVisited[8] = {false};
int maxCount = 0;

void Func(int k, int count, const vector<vector<int>>& dungeons)
{
    if (count > maxCount)
    {
        maxCount = count;
    }
    
    for (int i = 0; i < dungeons.size(); i++)
    {
        if(!isVisited[i] && k >= dungeons[i][0])
        {
            isVisited[i] = true;
            Func(k - dungeons[i][1], count + 1, dungeons);
            isVisited[i] = false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    maxCount = 0;
    
    Func(k, maxCount, dungeons);

    return maxCount;
}