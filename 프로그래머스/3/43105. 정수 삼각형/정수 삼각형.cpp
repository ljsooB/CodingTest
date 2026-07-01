#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> triangle) {
    vector<vector<int>> dp = triangle;

    for (size_t r = 1; r < triangle.size(); r++)
    {
        for (size_t c = 0; c < triangle[r].size(); c++)
        {
            if (c == 0)
            {
                dp[r][c] += dp[r - 1][c];
            }
            else if (c == r)
            {
                dp[r][c] += dp[r - 1][c - 1];
            }
            else
            {
                dp[r][c] += max(dp[r - 1][c - 1], dp[r - 1][c]);
            }
        }
    }

    return *max_element(dp.back().begin(), dp.back().end());
}