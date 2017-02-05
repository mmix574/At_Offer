#include <iostream>
#include <map>

#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Solution {
public:
    Solution(){
        for (int i = 0; i < 256; ++i) {
            count_array[i] = 0;
        }
    }
    int FirstNotRepeatingChar(string str) {
        for (int i = 0; i < str.length(); ++i) {
            count_array[str[i]]++;
        }
        for (int j = 0; j < str.length(); ++j) {
            if(count_array[str[j]]==1){
                return j;
            }
        }
        return -1;
    }
private:
    int count_array[256];
};
int main(){
    Solution s;
    cout<<s.FirstNotRepeatingChar("google")<<endl;
    return 0;
}