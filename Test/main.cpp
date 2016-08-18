#include <iostream>
#include <TreeNode.h>
#include <vector>
using namespace std;

int main(){
    vector<int > v= {1,2,3,4,5,6,7,8,9};
    TreeNode::PreOrderTraverse(TreeNode::create(v));

    return 0;
}