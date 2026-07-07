#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0;

    vector<vector<int>> v = land;
    
    for(size_t i = 1; i < land.size(); i++)
    {
        for(size_t j = 0; j < land[0].size(); j++)
        {
            for (size_t k = 0; k < land[0].size(); k++)
            {
                if (k == j) continue;

                v[i][j] = max(v[i][j], land[i][j] + v[i - 1][k]);
            }
        }
    }

    return *max_element(v.back().begin(), v.back().end());
}