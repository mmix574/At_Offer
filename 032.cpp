#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

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
    int move_top(int x){
        if(!x){return 0;}
        int len = 0;
        while (x){
            len ++;
            x/=10;
        }
        return x - pow(10,len);
    }
    bool cmp(int a,int b){
        if(top(a)<top(b)){
            return true;
        }else if(top(a)==top(b)){
            return cmp();
        }else{
            return false;
        }
    }
    string PrintMinNumber(vector<int> numbers) {

    }
};

int main(){
    Solution s;
    cout<<s.top(512)<<endl;
    return 0;
}