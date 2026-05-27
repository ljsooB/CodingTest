#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    for(size_t i = 0; i < arr1.size(); i++)
    {
        vector<int> a(arr2[0].size(), 0);
        
        for(size_t r = 0; r < arr1[i].size(); r++)
        {
            for(size_t c = 0; c < arr2[r].size(); c++)
            {
                a[c]+= arr1[i][r] * arr2[r][c];
            }
        }
        
        answer.push_back(a);
    }
    
    return answer;
}