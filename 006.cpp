#include <iostream>
#include <vector>
#include <deque>

using namespace std;

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int r_min = 0;
        for (int i = 0; i < rotateArray.size(); ++i) {
            if(r_min==-1){r_min = rotateArray[i];}
            else{
                r_min = min(r_min,rotateArray[i]);
            }
        }
        return r_min;
    }
};

int main(){
    Solution s;
    vector<int> aa = {3,4,5,1,2};

    cout<<s.minNumberInRotateArray(aa)<<endl;

    return 0;
}