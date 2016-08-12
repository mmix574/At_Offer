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

    stack s;

    int stackSum(stack s){
        int sum = 0;
        while (!s.empty()){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }

    void dfs(TreeNode* root,int exp){
        if(stackSum(s)+root){
            
        }

        if(root->left){

        }else{

        }
    }

    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int>> r_s;



        return r_s;
    }
};

int main(){


    return 0;
}