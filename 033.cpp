#include <iostream>

using namespace std;

class Solution {
public:
    int GetUglyNumber_Solution(int index) {
                         /*5 4 3 2*/
        int mapping[10]={0b0001,0b0010,0b0100,0b1000,0b0011,0b0101,0b1001,0b0111,0b1011,0b1111};
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
//    Solution s;
//    cout<<s.GetUglyNumber_Solution(2)<<endl;
    int i = 0b0011;
    cout<<i<<endl;

    return 0;
}