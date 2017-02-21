//
// Created by taita on 2017/2/20.
//
#include <iostream>
#include <vector>
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
    vector<vector<int>> list;

    vector<vector<int> > Print(TreeNode* pRoot) {
        PrintCore(pRoot,0);
        return list;
    }

    void PrintCore(TreeNode *root,int dep){
        if(!root){
            return ;
        }else{
            if(list.size()<=dep){
                //不存在
                vector<int> t;
                t.push_back(root->val);
                list.push_back(t);
            }else{
                // 存在
                list[dep].push_back(root->val);
            }
            PrintCore(root->left,dep+1);
            PrintCore(root->right,dep+1);
        }
    }
};

int main(){
    return 0;
}