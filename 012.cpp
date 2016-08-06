#include <iostream>

using namespace std;

class Solution {
public:
    double Power(double base, int exponent) {
        if(exponent<0){
            return 1.0/Power(base,-exponent);
        }if(exponent==0){
            return 1;
        }else if(exponent==1){
            return base;
        }else{
            double t = Power(base,exponent/2);
            if(exponent%2==0){return t*t;}
            else{
                return t*t*base;
            }
        }
    }
};

int main(){
    Solution s;
    cout<<s.Power(1.1,2)<<endl;

    return 0;
}