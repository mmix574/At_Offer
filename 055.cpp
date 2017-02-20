//
// Created by taita on 2017/2/19.
//
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot)
    {
        if(!pRoot){ return NULL; }
        return isMirror(pRoot->left,pRoot->right);
    }
    bool isMirror(TreeNode *A,TreeNode *B){
        if(!A&&!B){
            return true;
        }else if((!A&&B)||(A&&!B)){
            return false;
        }else{
            if(A->val!=B->val){
                return false;
            }else{
                if(isMirror(A->left,B->right)&&isMirror(A->right,B->left)){
                    return true;
                }else{
                    return false;
                }
            }
        }

    }
};

int main(){
    return 0;
}