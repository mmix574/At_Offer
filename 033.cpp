#include <iostream>

using namespace std;

class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        if(index<0) return 0;
//      5 4 3 2 5 4 3 2
        int d[4]={2,3,4,5};
        int s = 1;
        int i = 0;
        while(index>>i){
            if((index>>i)&1){
                s=s*d[i%4];
                printf("%d\n",i);
            }
            i++;
        }
        return s;
    }
};

int main(){
    Solution s;
    cout<<s.GetUglyNumber_Solution(3)<<endl;

    return 0;
}