//
// Created by taita on 2017/2/19.
//

#include <iostream>

using namespace std;
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {

    }
};
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if(pNode->right){
            TreeLinkNode* p= pNode->right;
            while(p->left){
                p=p->left;
            }
            return p;
        }else{
            TreeLinkNode *parent = pNode->next;
            while(parent&&parent->left!=pNode){
                TreeLinkNode *t = parent->next;
                pNode = parent;
                parent = t;
            }
            return parent;
        }
    }
};
int main(){

    return 0;
}