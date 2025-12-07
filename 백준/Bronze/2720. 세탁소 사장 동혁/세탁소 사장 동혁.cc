#include <iostream>
using namespace std;

int main() {
    int num;
    int pay;  
    int count[4] = { 0 };
    int unit[4] = { 25, 10, 5, 1 };

    cin >> num;
    for (int i = 0; i < num; i++) 
    {
        cin >> pay;

        for (int j = 0; j < 4; j++) 
        {
            count[j] = (int(pay / unit[j])); 

            pay %= unit[j];
        }

        for (int i = 0; i < 4; i++)
        {
            cout << count[i] << " ";
        }
       
    }

    return 0;
}
