#include <iostream>
using namespace std;

class Solution {
public:
    int pow(int a,int n){
        if(n==0){return 1;}else if(n==1){return a;}
        else{
            int bd = pow(a,n/2);
            if(n%2==0){
                return bd*bd;
            }else{
                return bd*bd*a;
            }
        }
    }

    int rectCover(int number) {
        if(number==0){
            return 0;
        }else if(number==1){
            return 1;
        }else if(number==2){
            return 2;
        }
        return rectCover(number-2)+rectCover(number-1);
    }
};

int main(){
    Solution s;

    cout<<s.rectCover(4)<<endl;

    return 0;
}