#include <iostream>
#include <vector>
//二叉搜索树

using namespace std;

class Solution {

public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        //base
        if(sequence.size()==0){
            return false;
        }
        if(sequence.size()==1){
            return true;
        }

        int last = sequence[sequence.size()-1];
        vector<int> left ;
        vector<int> right;

        int i = 0;
        while(sequence[i]<last){
            left.push_back(sequence[i]);
            i++;
        }
        for (int j = i; j < sequence.size()-1; ++j) {
            if(sequence[j]<last){
                return false;
            }
            right.push_back(sequence[j]);
        }
        if(left.size()!=0&&right.size()!=0){
            return VerifySquenceOfBST(left)&&VerifySquenceOfBST(right);
        }else if(left.size()==0&&right.size()!=0){
            return VerifySquenceOfBST(right);
        }else if(left.size()!=0&&right.size()==0){
            return VerifySquenceOfBST(left);
        }else{
            return false;
        }

    }
};

int main(){
    Solution s;

//    vector<int> test_case = {1,5,4,10,8,11};

//    vector<int> test_case = {7,4,6,5};
    vector<int> test_case = {4,6,7,5};

    s.VerifySquenceOfBST(test_case)?printf("yes"):printf("no");
    return 0;
}