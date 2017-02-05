#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        for (int i = 0; i < data.size(); ++i) {
            if(k==data[i]){
                int count = 0;
                while(k==data[i]&&i<data.size()){
                    count++;
                    i++;
                }
                return count;
            }
        }
    }
};

int main(){
    vector<int> data = {1,1,3,3,3,7,8,9};
    Solution s;
    cout<<s.GetNumberOfK(data,3)<<endl;
    return 0;
}