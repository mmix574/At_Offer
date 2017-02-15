//
// Created by taita on 2017/2/12.
//
#include <iostream>
using namespace std;
class Solution {
public:
    bool isNumChar(char c){
        if('0'<=c&&'9'>=c){
            return true;
        }else{
            return false;
        }
    }
    int charSign(char c){
        if(c=='-'){
            return -1;
        }else if(c=='+'){
            return 1;
        }else{
            return 0;
        }
    }
    bool validata(string s){
        for (int i = 0; i < s.length(); ++i) {
            if(!isNumChar(s[i])){
                return false;
            }
        }
        return true;
    }
    int StrToInt(string str) {
        int sign = 0;
        str.erase(0,str.find_first_not_of(' '));
        str.erase(str.find_last_not_of(' ')+1,str.length());

        if((sign = charSign(str[0]))!=0){
            str.erase(str.begin());
        }


        if(!validata(str)){
            return 0;
        }

        int r = 0;
        for (int i = 0; i < str.length(); ++i) {
            r*=10;
            r+=(str[i])+(0-'0');
        }
        if(sign==-1){
            return -r;
        }else{
            return r;
        }
    }
};
int main(){
    Solution s;
    int a = s.StrToInt("  +-1  ");
    cout<<a<<endl;
    return 0;
}