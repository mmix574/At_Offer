//
// Created by taita on 2017/2/15.
//

#include <iostream>
using namespace std;

//aaa
//matches a.a ab*ac*a
//not matches aa.a ab*a

//.* 连续n个相同

class Solution {
public:
    bool match(char* str, char* pattern)
    {
    }
};

int main(){
    Solution s;
    if(s.match("aaa","a.a")){
        cout<<"matches"<<endl;
    }else{
        cout<<"not matches"<<endl;
    }
    return 0;
}