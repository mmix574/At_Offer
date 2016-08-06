#include <iostream>
#include <limits>

using namespace std;

class Solution {
public:
    int  NumberOf1(int n) {
        if(n>=0) {

            int i = 0;
            int sum = 0;//count of 1;
            while (n >> i != 0) {
                if (n >> i & 1 == 1) {
                    sum++;
                }
                i++;
            }
            return sum;
        }else{
            int i = 0;
            int sum = 0;//count of 0;
            while(n>>i!=-1){
                if((n>>i& 1)== -0){
                    sum++;
                }
                i++;
            }
            return 32-sum;
        }
    }
};

int main(){

    Solution s;
    cout<<s.NumberOf1(-2147483648)<<endl;

    return 0;
}