//
// Created by taita on 2017/2/11.
//



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        sort(numbers.begin(),numbers.end());
        int zero_count = 0;
        for (int i = 0; i < numbers.size()-1; ++i) {
            if(numbers[i]==0){
                zero_count++;
            }else if(numbers[i+1]==numbers[i]){
                return false;
            }
            else if(numbers[i+1]-numbers[i]-1<=zero_count){
                    zero_count-=numbers[i+1]-numbers[i]-1;
            }else{
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution s;
    vector<int> data = {7,8,9,0,11};
//    cout<<s.IsContinuous(data)<<endl;
    cout<<data.size()<<endl;
    return 0;
}