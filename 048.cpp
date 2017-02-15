//
// Created by taita on 2017/2/15.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        int toRight = 1;
        int toLeft = 1;
        vector<int> r ;
        r.resize(A.size());
        r[0] = 1;
        for (int i = 0; i < A.size()-1; ++i) {
            toRight*=A[i];
            r[i+1] = toRight;
        }
        for (int j = A.size()-1; j >0 ; j--) {
            toLeft*=A[j];
            r[j-1] *= toLeft;
        }
        return r;
    }
};

int main(){
    vector<int> data = {1,2,3,4,5};
    Solution s;
    vector<int> rs = s.multiply(data);
    for (int i = 0; i < rs.size(); ++i) {
        cout<<rs[i]<<" ";
    }
    return 0;
}