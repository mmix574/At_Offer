#include <iostream>
#include <map>
#include <vector>
#include "Model/TreeNode.h"

using namespace std;
using namespace Trees;

class Solution {
public:
    vector<TreeNode *> list;
    TreeNode * r  = NULL;

    void InOrderTraverse(TreeNode * root){
        if(root->left){
            InOrderTraverse(root->left);
        }
        if(!r){
            r = root;
        }
        list.push_back(root);

        if(root->right){
            InOrderTraverse(root->right);
        }
    }

    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(!pRootOfTree){return NULL;}

        InOrderTraverse(pRootOfTree);
        list[0]->left = NULL;
        list[list.size()-1]->right = NULL;

        for (int i = 0; i < list.size()-1; ++i) {
            list[i]->right=list[i+1];
        }

        for (int i = 1; i < list.size(); ++i) {
            list[i]->left = list[i-1];
        }

        return r;
    }
};

int main(){
    vector<int > v = {1,2,3,4,5,6,7,8,9};
    TreeNode * t = create(v);
    PreOrderTraverse(t);
    cout<<endl;

    Solution s;
    TreeNode * p= s.Convert(t);
    while(p){
        cout<<p->val<<" ";
        p=p->right;
    }

    return 0;
}