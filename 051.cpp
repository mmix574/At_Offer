//
// Created by taita on 2017/2/16.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    string s;
    int size = 0;
    vector<char> v;
    int moreThanTwo[256] = {0};

    //Insert one char from stringstream
    void Insert(char ch)
    {
        s+=ch;
        size++;
    }
    bool inSet(char ch){
        for (int i = 0; i < v.size(); ++i) {
            if(v[i]==ch){
                return true;
            }
        }
        return false;
    }
    bool deSet(char ch){
        for (int i = 0; i < v.size(); ++i) {
            if(v[i]==ch){
                v.erase(v.begin()+i);
                return true;
            }
        }
        return false;
    }
    //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
        if(inSet(s[size-1])){

        }else{

        }
    }
};

int main(){
    Solution s;
    s.Insert('g');
    s.Insert('o');
    s.Insert('o');
    s.Insert('g');
    s.Insert('l');
    s.Insert('e');
    cout<<s.FirstAppearingOnce()<<endl;
    return 0;
}