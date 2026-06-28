#include <vector>

using namespace std;

int solution(int n) {
    if (n < 2) return 0;

    vector<char> is_prime(n + 1, true);

    is_prime[0] = false;
    is_prime[1] = false;

    int answer = n - 1; 

    for (int i = 2; i <= n / i; i++) 
    {
        if (false == is_prime[i]) continue;

        for (int j = i * i; j <= n; j += i)
        {
            if (is_prime[j]) 
            {
                is_prime[j] = false;
                answer--;
            }
        }
    }

    return answer;
}