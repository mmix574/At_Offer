//一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int jumpFloorII(int number) {

        if(number==0){
            return 1;
        }else if(number==1){
            return 1;
        }else if(number==2){
            return 2;
        }else{
            int sum = 0;
            for (int i = 1;i<number+1;i++){
                sum+=  jumpFloorII(number-i);
            }
            return sum;
        }
    }
};

int main(){
    Solution s;
    cout<<s.jumpFloorII(3)<<endl;
}