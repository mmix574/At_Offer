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
    int len = 0;
    int hashTable[256] = {0};

    //Insert one char from stringstream
    void Insert(char ch)
    {
        s+=ch;
        len++;
    }
    //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
        hashTable[s[len-1]]+=1;
        for (int j = 0; j < s.length(); ++j) {
            if(hashTable[int(s[j])]==1){
                return s[j];
            }
        }
        return '#';
    }
};

int main(){
    Solution s;
    s.Insert('g');
    cout<<s.FirstAppearingOnce()<<endl;

    s.Insert('o');
    cout<<s.FirstAppearingOnce()<<endl;

    s.Insert('o');
    cout<<s.FirstAppearingOnce()<<endl;

    s.Insert('g');
    cout<<s.FirstAppearingOnce()<<endl;

    s.Insert('l');
    cout<<s.FirstAppearingOnce()<<endl;

    s.Insert('e');
    cout<<s.FirstAppearingOnce()<<endl;
    return 0;
}