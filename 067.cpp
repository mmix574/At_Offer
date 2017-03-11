#include <iostream>
#include <deque>
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
	int odd = 1;
	stack<TreeNode *> odds;
	stack<TreeNode *> evens;
    vector<vector<int> > Print(TreeNode* pRoot) {
		vector<vector<int>> res;
		if(!pRoot){
			return res;
		}else{
			odds.push(pRoot);
			while(!odds.empty()||!evens.empty()){
				vector<int> t_res;
				if(odd){
					while(!odds.empty()){
						TreeNode * t = odds.top();
						odds.pop();
						t_res.push_back(t->val);
						if(t->right){
							evens.push(t->right);
						}
						if(t->left){
							evens.push(t->left);
						}
					}
				}else{
					while(!evens.empty()){
						TreeNode *t = evens.top();
						evens.pop();
						t_res.push_back(t->val);
						if(t->left){
							odds.push(t->left);
						}
						if(t->right){
							odds.push(t->right);
						}
					}
				}
				odd = (-odd);
				res.push_back(t_res);
			}
		}
		return res;
    }
};

using namespace std;
int main(){

}