//
// Created by taita on 2017/2/10.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int>> result ;
        for (int i = 1; i < sum; ++i) {
            vector<int > new_data;
            int total = 0;
            for (int j = i; j < sum; ++j) {
                total+=j;
                new_data.push_back(j);
                if(total==sum){
                    result.push_back(new_data);
                    break;
                }
            }
        }
        return result;
    }
};

int main(){

    Solution s;
    vector<vector<int>>final_result = s.FindContinuousSequence(100);

//    std:cout<<final_result.size()<<std::endl;

    for (int i = 0; i < final_result.size(); ++i) {
        vector<int> data = final_result[i];
        for (int j = 0; j < data.size(); ++j) {
            cout<<data[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}