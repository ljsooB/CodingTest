#include<vector>
#include<queue>
using namespace std;

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    int n = maps.size();
    int m = maps[0].size();
    vector<vector<bool>> isVisited(n, vector<bool>(m, false));
    
    queue<pair<int, int>> q;
    q.push({0, 0});
    isVisited[0][0] = true;
    int dist = 1;
    
    while(!q.empty())
    {
        int qSize = q.size();
        for(int i = 0; i < qSize; i++)
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            if (x == n - 1 && y == m -1 ) return dist;
            for(int d = 0; d < 4; d++)
            {
                int nx = x + dx[d], ny = y + dy[d];
                if(nx >= 0 && ny >= 0 &&
                   nx < n && ny < m &&
                   maps[nx][ny] == 1 &&
                   isVisited[nx][ny] != true
                  )
                {
                    isVisited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
        dist++;
    }
    return -1;
}