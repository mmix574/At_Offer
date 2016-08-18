#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        sort(input.begin(),input.end());
        vector<int > rs ;
        if(k>input.size()){return rs;}
        for (int i = 0; i < k; ++i) {
            rs.push_back(input[i]);
        }
        return rs;
    }
};


int main(){
    vector<int> v ={5,3,4,1,9,7,6};

    sort(v.begin(),v.end());

    for (int i = 0; i < v.size(); ++i) {
        cout<<v[i];
    }

    return 0;
}
