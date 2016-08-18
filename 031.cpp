#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        if(n<0){
            return 0;
        }
        if(n<10){
            return 1;
        }else{
            int a = n/10;
            return 1+NumberOf1Between1AndN_Solution(a)*10;
        }
    }
};

int main(){
    Solution s;
    cout<<s.NumberOf1Between1AndN_Solution(30)<<endl;
    return 0;
}