//
// Created by taita on 16/8/18.
//

#ifndef AT_OFFER_TREE_H
#define AT_OFFER_TREE_H

#endif //AT_OFFER_TREE_H

#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

TreeNode * create(vector<int>){

}