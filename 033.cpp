#include <iostream>

using namespace std;

class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        if(index<0) return 0;
        if(index == 1) return 1;
//      5 4 3 2 5 4 3 2
        int d[4]={2,3,4,5};
        switch ((index-1)%4){
            case 0:
                return 5*GetUglyNumber_Solution(index-1);
            case 1:
                return 2*GetUglyNumber_Solution(index-1);
            case 2:
                return 3*GetUglyNumber_Solution(index-1)/2;
            case 3:
                return 4*GetUglyNumber_Solution(index-1);
        }
    }
};

int main(){
    Solution s;
    cout<<s.GetUglyNumber_Solution(3)<<endl;
    return 0;
}