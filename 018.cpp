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
    void Mirror(TreeNode *pRoot) {
    	//base
    	if(pRoot){
    		if(pRoot->left&&pRoot->right){
    			Mirror(pRoot->left);
    			Mirror(pRoot->right);
    			TreeNode *t = pRoot->left;
    			pRoot->left = pRoot->right;
    			pRoot->right = t;
    		}else if(pRoot->left&&!pRoot->right){
    			Mirror(pRoot->left);
    			pRoot->right = pRoot->left;
    			pRoot->left=NULL;
    		}else if(!pRoot->left&&pRoot->right){
    			Mirror(pRoot->right);
    			pRoot->left = pRoot->right;
    			pRoot->right=NULL;
    		}
    	}
    }
};

int main(){
	return 0;
}