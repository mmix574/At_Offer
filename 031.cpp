#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int NumberOf1(int x){
        int sum  = 0 ;
        while(x){
            if(x%10==1){
                sum++;
            }
            x/=10;
        }
        return sum;
    }

    int NumberOf1Between1AndN_Solution(int n)
    {
        int sum = 0;
        for (int i = 0; i <=n ; ++i) {
            sum+=NumberOf1(i);
        }
        return sum;
    }
};

int main(){
    Solution s;
    int start = 100;
    int end = 1300;
    cout<<s.NumberOf1Between1AndN_Solution(end)-s.NumberOf1Between1AndN_Solution(start-1)<<endl;
    return 0;
}