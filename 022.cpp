#include <iostream>
#include <queue>

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
    queue<TreeNode *> job;
    vector<int> PrintFromTopToBottom(TreeNode *root) {
        vector<int > r_s;
        if(root==NULL){
            return r_s;
        }
        if(root->left!=NULL){
            job.push(root->left);
        }
        if(root->right!=NULL){
            job.push(root->right);
        }
        r_s.push_back(root->val);
        while(!job.empty()){
            TreeNode * p = job.front();
            if(p->left!=NULL){
                job.push(p->left);
            }
            if(p->right!=NULL){
                job.push(p->right);
            }
            r_s.push_back(p->val);
            job.pop();
        }
        return r_s;
    }
};

int main(){
    TreeNode *root = (TreeNode *)malloc(sizeof(TreeNode));
    root->val = 0;
    root->left = (TreeNode *)malloc(sizeof(TreeNode));
    root->right = (TreeNode *)malloc(sizeof(TreeNode));

    root->left->left=NULL;
    root->left->right=NULL;
    root->left->val=1;

    root->right->left = NULL;
    root->right->right = (TreeNode *)malloc(sizeof(TreeNode));
    root->right->val = 2;

    root->right->right->left = NULL;
    root->right->right->right = NULL;
    root->right->right->val = 3;

    Solution s;

    vector<int> vi = s.PrintFromTopToBottom(root);

    for(int i = 0;i<vi.size();i++){
        cout<<vi[i]<<" ";
    }

    return 0;
}