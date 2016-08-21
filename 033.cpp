#include <iostream>

using namespace std;

class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        int mapping[10]={1,2,4,8,3,5,9,7,11,15};
        if(index<0) return 0;
        if(index == 1) return 1;

        if(index>10){
            return (120*index/10)*(index%10);
        }else{
            int i = 0;
            int r = 1;
            while((mapping[index-1]>>i)&1){
                r *= mapping[index-1];
                i++;
            }
            return r;
        }
    }
};

int main(){
    Solution s;
    cout<<s.GetUglyNumber_Solution(2)<<endl;
    return 0;
}