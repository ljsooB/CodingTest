#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());

    for (size_t i = 0; i + 1 < phone_book.size(); i++)
    {
        if (phone_book[i + 1].substr(0, phone_book[i].length()) == phone_book[i])
        {
            return false;
        }
    }

    return true;
}