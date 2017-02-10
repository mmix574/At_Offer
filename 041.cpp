//
// Created by taita on 2017/2/10.
//

#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    string ReverseSentence(string str) {
        string result;
        int last = str.length()-1;
        for (int i = str.length()-1; i >=0 ; --i) {
            if(str[i]==' '){
                for (int j = i+1; j <= last; ++j) {
                    result.append(str[j]);
                }
                last=i;
                continue;
            }
        }
        return result;
    }
};

int main(){
    Solution s;
    string result =  s.ReverseSentence("student. a am I");

    cout<<result<<endl;
    return 0;
}