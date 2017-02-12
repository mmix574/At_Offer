//
// Created by taita on 2017/2/12.
//

#include <iostream>

using namespace std;

class Solution {
public:
    int Add(int num1, int num2)
    {
        int a = num1;
        int b = num2;
        while(a&b){
            int a_tmp = a;
            int b_tmp = b;
            a = a_tmp^b_tmp;
            b = a_tmp&b_tmp;
            b = b<<1;
        }
        return a|b;
    }
};

int main(){
    Solution s;
    cout<<s.Add(1,7)<<endl;
    cout<<(2|4)<<endl;
    return 0;
}