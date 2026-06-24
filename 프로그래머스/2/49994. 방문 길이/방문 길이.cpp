#include <string>
#include <vector>

using namespace std;

bool is_movable(int x, int y)
{
    if( (x < 0 || x > 10) || 
        (y < 0 || y > 10) )
    {
        return false;
    }
    
    return true;
}

bool is_valid(vector<int> move_pos, vector<vector<int>>& is_moved)
{
    vector<int> reverse_pos = 
    {
        move_pos[2], move_pos[3],
        move_pos[0], move_pos[1]
    };

    for(size_t i = 0; i < is_moved.size(); i++)
    {
        if(is_moved[i] == move_pos || is_moved[i] == reverse_pos)
        {
            return false;
        }
    }

    is_moved.push_back(move_pos);

    return true;
}
       
int solution(string dirs) {
    int answer = 0;

    vector<vector<int>> is_moved;
    int x = 5, y = 5;
    
    
    for(size_t i = 0; i < dirs.size(); i++)
    {
        if ('L' == dirs[i])
        {
            if(is_movable(x - 1, y))
            {
                vector<int> t = {x, y, x - 1, y};
                x--;
                
                if(is_valid(t, is_moved))
                {
                    answer++;
                }
            }
        }
        else if ('R' == dirs[i])
        {
            if(is_movable(x + 1, y))
            {
                vector<int> t = {x, y, x + 1, y};
                x++;
                
                if(is_valid(t, is_moved))
                {
                    answer++;
                }  
            }
        }
        else if ('D' == dirs[i])
        {
            if(is_movable(x, y - 1))
            {
                vector<int> t = {x, y, x, y - 1};
                y--;
                
                if(is_valid(t, is_moved))
                {
                    answer++;
                }  
            }
        }
        else if ('U' == dirs[i])
        {
            if(is_movable(x, y + 1))
            {
                vector<int> t = {x, y, x, y + 1};
                y++;
                
                if(is_valid(t, is_moved))
                {
                    answer++;
                } 
            }
        }
    }
    
    return answer;
}