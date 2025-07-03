#include <string>
#include <algorithm>

using namespace std;

int solution(string name) {
    int answer = 0;
    int len = name.size();

    for (int i = 0; i < len; i++) {
        answer += min(name[i] - 'A', 'Z' - name[i] + 1);
    }

    int move = len - 1; 
    for (int i = 0; i < len; i++) {
        int next = i + 1;
        
        while (next < len && name[next] == 'A') next++;
        
        move = min(move, i + len - next + min(i, len - next));
    }
    answer += move;
    return answer;
}
