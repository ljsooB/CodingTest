#include <string>
#include <vector>
#include <iostream>

using namespace std;

void dfs(int curr, int end, vector<vector<int>> computers, vector<bool>& is_visited)
{
    is_visited[curr] = true;

    for (int next = 0; next < end; next++)
    {
        if (computers[curr][next] == 1 && !is_visited[next])
        {
            dfs(next, end, computers, is_visited);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<bool> is_visited(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!is_visited[i])
        {
            answer++;
            dfs(i, n, computers, is_visited);
        }
    }
    
    return answer;
}