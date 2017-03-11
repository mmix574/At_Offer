#include <iostream>
#include <vector>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
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
	void InOrderTraverse(TreeNode *root){
		if(root->left){
			InOrderTraverse(root->left);
		}
		cout<<(char)root->val;
		cout<<" ";
		if(root->right){
			InOrderTraverse(root->right);
		}
	}

    char* Serialize(TreeNode *root) {
        char * buf = (char *)malloc(sizeof(char)*1000);
        int i = 0;
        queue<TreeNode *> qu;
        qu.push(root);
        qu.push(root->left);
        qu.push(root->right);
        cout<<endl;
        while(!qu.empty()){
        	TreeNode * t = qu.front();
        	qu.pop();
        	if(t){
	        	buf[i++] = (char)(t->val);
	        	cout<<t->val<<endl;
	        	qu.push(t->left);
        		qu.push(t->right);
        	}else{
        		buf[i++] = '#';
        	}
        }
        cout<<endl;
        buf[i] = '\0';
        return buf;
    }
    TreeNode* Deserialize(char *str) {
    	TreeNode *root = NULL;
    	queue<TreeNode **> qu;
    	int i = 0;
    	while(str[i]!='\0'){
    		if(qu.empty()){
    			root = (TreeNode *)malloc(sizeof(TreeNode));
    			root->val = str[i];
    			root->left = NULL;
    			root->right = NULL;
    			qu.push(&(root->left));
    			qu.push(&(root->right));
    		}else{
    			TreeNode **t = qu.front();
    			qu.pop();
    			(*t) = (TreeNode*)malloc(sizeof(TreeNode));
    			(*t)->left = NULL;
    			(*t)->right = NULL;
    			(*t)->val = str[i];
    			qu.push(&((*t)->left));
    			qu.push(&((*t)->right));
    		}
    		i++;
    	}
    	return root;
    }
};



int main(){
	Solution s;
	char buf[10] = "1234567";
	TreeNode* root = s.Deserialize(buf);
	s.InOrderTraverse(root);
	char * de = s.Serialize(root);
	printf("%s\n",de);
	return 0;
}