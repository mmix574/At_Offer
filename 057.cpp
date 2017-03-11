//
// Created by taita on 2017/2/21.
//

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
    char* Serialize(TreeNode *root) {
        char res[100];
        int i = 0;
        queue<TreeNode*> q;


        //levelTraverse
    }
    TreeNode* Deserialize(char *str) {
        //levelTraverseCons
    }
};

int main(){

    return 0;
}