#include <iostream>
#include <map>
#include <vector>
#include "Model/TreeNode.h"

using namespace std;
using namespace Trees;

class Solution {
public:
    vector<TreeNode **> list;
    TreeNode * r  = NULL;

    void InOrderTraverse(TreeNode * root){
        if(root->left){
            InOrderTraverse(root->left);
        }
        if(!r){
            r = root;
        }
        list.push_back(&(root->left));
        list.push_back(&root);
        list.push_back(&(root->right));
        if(root->right){
            InOrderTraverse(root->right);
        }
    }
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(!pRootOfTree){return NULL;}

        InOrderTraverse(pRootOfTree);

        *(list[0]) = NULL;
        *(list[list.size()-1]) = NULL;

        for (int i = 1; i < list.size()-1; ++i) {
            switch (i%3){
                case 0:
//                    left
                    *(list[i]) = *(list[i-2]);
                    break;
                case 1:
                    break;
                case 2:
//                    right
                    *(list[i]) = *(list[i+2]);
                    break;
                default:
                    break;
            }
        }
        return r;
    }
};

int main(){
    
    return 0;
}