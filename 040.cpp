//
// Created by taita on 2017/2/10.
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string LeftRotateString(string str, int n) {
        int length = str.length();
        char *buf = (char*)malloc(sizeof(char)*n);
        for (int j = 0; j < n; ++j) {
            buf[j] = str[j];
        }

        for (int i = n; i < str.length(); ++i) {
            str[i-n] = str[i];
        }
        for (int k = 0; k < n; ++k) {
            str[length-n+k]=buf[k];
        }
        return str;
    }
};

int main(){
    Solution s;
    string result =  s.LeftRotateString("abcXYZdef",3);
    cout<<result<<endl;
    return 0;
}