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
	bool isSubTree(TreeNode *pRoot1,TreeNode *pRoot2){
		if(!pRoot1){return false;}
		if(!pRoot2){return true;}

		// base
		if(pRoot1->val == pRoot2->val){
			if(!pRoot2->left&&!pRoot2->right){
				return true;
			}else if(pRoot2->left&&!pRoot2->right){
				return isSubTree(pRoot1->left,pRoot2->left);
			}else if(!pRoot2->left&&pRoot2->right){
				return isSubTree(pRoot1->right,pRoot2->right);
			}else{
				return isSubTree(pRoot1->left,pRoot2->left)&&isSubTree(pRoot1->right,pRoot2->right);
			}
		}else{
			return false;
		}
	}

    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
    	if(!pRoot1||!pRoot2){return false;}
    	//base
    	if(isSubTree(pRoot1,pRoot2)){
    		return true;
    	}else{
    		return HasSubtree(pRoot1->left,pRoot2)||HasSubtree(pRoot1->right,pRoot2);
    	}
    }
};

int main(){
	return 0;
}