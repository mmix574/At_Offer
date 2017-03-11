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
};
*/

class Solution {
public:
	int count = 0;
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
    	if(!pRoot){
    		return NULL;
    	}
    	if(pRoot->left){
    		TreeNode* l = KthNode(pRoot->left,k);
    		if(l){
    			return l;
    		}
    	}
    	if(++count==k){
    		return pRoot;
    	}
    	if(pRoot->right){
    		TreeNode* r = KthNode(pRoot->right,k);
    		if(r){
    			return r;
    		}
    	}
    	return NULL;
    }
};

int main(){
	return 0;
}