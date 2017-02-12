//
// Created by taita on 2017/2/12.
//

#include <iostream>

using namespace std;


class Solution {
public:
    int Sum_Solution(int n) {
        return n==0?0:Sum_Solution(n-1)+n;
    }
};

int main(){
    Solution s;
    cout<<s.Sum_Solution(100)<<endl;
    return 0;
}