#include <iostream>
#include <vector>
#include <stack>

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

	vector<vector<int> > result;

    void dfs(TreeNode* root,int exp,vector<int > path){
		//base
		if(!root->left&&!root->right&&exp==root->val){
			path.push_back(root->val);
			result.push_back(path);
		}else{
			if(root->val<exp){
				path.push_back(root->val);
				if(root->left){
					dfs(root->left,exp-root->val,path);
				}
				if(root->right){
					dfs(root->left,exp-root->val,path);
				}
			}
		}
    }
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
		vector<int> t;
		dfs(root,expectNumber,t);
        return result;
    }
};

int main(){


    return 0;
}