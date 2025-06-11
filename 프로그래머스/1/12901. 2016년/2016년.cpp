#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    
    string Month[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int Day[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int totalDay = 0;
    
    for(int i = 0; i < a - 1; i++)
    {
        totalDay+= Day[i];
    }
    totalDay += b;
    
    answer = Month[(totalDay - 1) % 7];
    
    return answer;
}