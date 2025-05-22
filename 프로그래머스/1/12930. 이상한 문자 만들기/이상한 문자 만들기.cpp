#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    string word = "";
    
    // 1. 공백 포함 전체 문자열 순회
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            // 단어 변환 처리
            for (int j = 0; j < word.length(); j++) {
                if (j % 2 == 0) word[j] = toupper(word[j]);
                else word[j] = tolower(word[j]);
            }
            answer += word; // 변환된 단어 추가
            answer += " ";  // 공백 추가
            word = "";      // 단어 초기화
        } else {
            word += s[i]; // 단어 조립
        }
    }

    // 2. 마지막 단어 처리 (공백으로 안 끝났을 경우)
    for (int j = 0; j < word.length(); j++) {
        if (j % 2 == 0) word[j] = toupper(word[j]);
        else word[j] = tolower(word[j]);
    }
    answer += word;

    return answer;
}
