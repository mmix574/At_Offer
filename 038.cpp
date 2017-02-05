#include <iostream>

using namespace std;

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    int TreeDepth(TreeNode* pRoot)
    {
        if(!pRoot){
            return 0;
        }
        else if(!pRoot->left&&!pRoot->right){
            return 1;
        }else if(!pRoot->right){
            return 1+TreeDepth(pRoot->left);
        }else if(!pRoot->left){
            return 1+TreeDepth(pRoot->right);
        }else{
            return TreeDepth(pRoot->left)>TreeDepth(pRoot->right)?1+TreeDepth(pRoot->left):1+TreeDepth(pRoot->right);
        }
    }
};

int main(){
    return 0;
}