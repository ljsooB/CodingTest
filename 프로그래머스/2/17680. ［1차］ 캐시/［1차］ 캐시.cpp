#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

string to_lower(string s) 
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    
    if(cacheSize == 0)
    {
        answer = cities.size() * 5;
    }
    else
    {
        vector<string> cache;
        cache.reserve(cacheSize);
        
        for(size_t i = 0; i < cities.size(); i++)
        {
            cities[i] = to_lower(cities[i]);
            
            vector<string>::iterator it = find(cache.begin(), cache.end(), cities[i]);
            if(cache.end() != it)
            {
                cache.erase(it);
                
                answer+= 1;
            }
            else
            {
                answer+= 5;
            }
            
            if (cache.size() == cacheSize) 
            {
                cache.pop_back();
            }
            
            cache.insert(cache.begin(), cities[i]);
        }
    }
    
    return answer;
}