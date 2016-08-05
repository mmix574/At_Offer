#include <iostream>

using namespace std;

class Solution {
public:
    int pow(int a,int n){
        //base
        if(n==0){
            return 1;
        }else if(n==1){
            return a;
        }
        else{
            int a_half = pow(a,n/2);
            if(n%2==0){
                return a_half*a_half;
            }else{
                return a_half*a_half*a;
            }
        }
    }
    int jumpFloor(int number) {
        int sum = 0;
//        base
        if(number==0){return 0;}
        else if(number==1){return 1;}
        else if(number==2){return 2;}
        else if(number==3){return 3;}
        else{
            return jumpFloor(number-1)+jumpFloor(number-2);
        }
    }
};

int main(){
    Solution s;
   cout<< s.jumpFloor(4)<<endl;

    return 0;
}