#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int width, height;
    for(width=1;width<=yellow;width++) {
        if(yellow % width != 0) continue;
        height = yellow / width;
        cout<<"["<<width<<"]" << "[" <<height<<"]"<<endl;
        
        int fBrown = height*2 + width*2 + 4;
        cout<<fBrown<<endl;
        if(brown == fBrown) break;
        
    }
    
    answer.push_back(height+2);
    answer.push_back(width+2);
    
    return answer;
}