#include <iostream>
using namespace std;

class Solution {
public:

	int abs(int x){
		if(x<0){
			return -x;
		}
		return x;
	}
    bool IsBalanced_Solution(TreeNode* pRoot) {
    	if(!pRoot){
    		return true;
    	}
    	int res = balance(pRoot);
    	if(res==-1){
    		return false;
    	}else{
    		return true;
    	}
    }
    int balance(TreeNode *root){
    	if(!root->left&&!root->right){
    		return 1;
    	}else if(root->left&&root->right){
    		int lv = balance(root->left);
    		if(lv==-1){
    			return -1;
    		}
    		int rv = balance(root->right);
    		if(rv==-1){
    			return -1;
    		}
    		if(abs(lv-rv)>1){
    			return -1;
    		}else{
    			return lv>rv?lv+1:rv+1;
    		}
    	}else if(root->left){
    		int lv = balance(root->left);
    		if(lv==-1){
    			return -1;
    		}else if(lv>1){
    			return -1;
    		}else{
    			return lv+1;
    		}
    	}else{
    		int rv = balance(root->right);
    		if(rv==-1){
    			return -1;
    		}else if(rv>1){
    			return -1;
    		}else{
    			return rv+1;
    		}
    	}
    }
};

int main(){
	return 0;
}