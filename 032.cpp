#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string rs;
    int top(int x){
        while(x/10){
            x/=10;
        }
        return x;
    }
    string PrintMinNumber(vector<int> numbers) {
        int len = numbers.size();
        if(!len){return rs;}
        int min_start = top(numbers[0]);

        for (int i = 0; i < numbers.size(); ++i) {
            int t = top(numbers[i]);
            if(t==1){
                min_start = 1;
                break;
            }else if(min_start>t){
                min_start = t;
            }
        }
        
    }
};

int main(){
    Solution s;
    cout<<s.top(512)<<endl;
    return 0;
}