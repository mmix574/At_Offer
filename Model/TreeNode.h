//
// Created by taita on 16/8/18.
//

#ifndef AT_OFFER_TREE_H
#define AT_OFFER_TREE_H

#endif //AT_OFFER_TREE_H

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

namespace Trees {

    struct TreeNode {
        int val;
        struct TreeNode *left;
        struct TreeNode *right;

        TreeNode(int x) :
                val(x), left(NULL), right(NULL) {
        }
    };

    TreeNode *create(vector<int> data) {
        TreeNode *rs = NULL;
        TreeNode *tail = NULL;
        queue<TreeNode **> q;
        int len = data.size();
        q.push(&rs);
        for (int i = 0; i < len; ++i) {
            TreeNode *t = (TreeNode *) malloc(sizeof(TreeNode));
            t->left = NULL;
            t->right = NULL;
            t->val = data[i];
            *(q.front()) = t;
            q.pop();
            q.push(&(t->left));
            q.push(&(t->right));
        }
        return rs;
    }

    void LevelTraverse(TreeNode *root) {
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty()) {
            cout << q.front()->val << " ";
            if (q.front()->left) {
                q.push(q.front()->left);
            }
            if (q.front()->right) {
                q.push(q.front()->right);
            }
            q.pop();
        }
    }

    void PreOrderTraverse(TreeNode *root) {
        cout << root->val << " ";
        if (root->left) {
            PreOrderTraverse(root->left);
        }
        if (root->right) {
            PreOrderTraverse(root->right);
        }
    }

    void PostOrderTraverse(TreeNode *root) {
        if (root->left) {
            PostOrderTraverse(root->left);
        }
        if (root->right) {
            PostOrderTraverse(root->right);
        }
        cout << root->val << " ";
    }

    void InOrderTraverse(TreeNode *root) {
        if (root->left) {
            InOrderTraverse(root->left);
        }
        cout << root->val << " ";
        if (root->right) {
            InOrderTraverse(root->right);
        }
    }
}