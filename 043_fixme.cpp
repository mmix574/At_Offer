//
// Created by taita on 2017/2/11.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getLive(int student[],n){
        for (int i = 0; i < n; ++i)
        {
            if(student[i]==0){
                return i;
            }
        }
        return -1;
    }
    int LastRemaining_Solution(int n, int m)
    {
        if(!n) return 0;
        bool student[n] = {0};
        int dead = 0;
        if(dead+1=n){
            return getLive(student,n);
        }
    }
};

int main(){
    Solution s;
    cout<<s.LastRemaining_Solution(100,7)<<endl;
}