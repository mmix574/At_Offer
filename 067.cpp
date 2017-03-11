#include <iostream>
#include <stack>
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
	int level_count = 1;
    vector<vector<int> > Print(TreeNode* pRoot) {
		vector<vector<TreeNode *>> res;
		stack<TreeNode *> s;
		while(!s.empty()){
			TreeNode *p = s.top();
			s.pop();
			if(odd){

			}else{
				
			}
		}
		return res;
    }
};

using namespace std;
int main(){

}