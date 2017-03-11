#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

typedef struct ListNode{
	int val;
	ListNode *next;
}ListNode;

void print(ListNode *p){
	if(!p) return;
	printf("%d ",p->val);
	ListNode *t = p->next;
	while(t&&t!=p){
		printf("%d ",t->val);
		t=t->next;
	}
}

class Solution {
public:
    int LastRemaining_Solution(int n, int m)
    {
    	ListNode *head = NULL;
    	ListNode *tail = NULL;
    	if(n<=0) return -1;
    	if(n==1) return n;
		for (int i = 0; i < n; ++i)
    	{
    		if(head==NULL){
    			head=tail=(ListNode *)malloc(sizeof(ListNode));
    			head->val=i;
    			head->next = NULL;
    		}else{
    			tail->next = (ListNode *)malloc(sizeof(ListNode));
    			tail = tail->next;
    			tail->next = NULL;
    			tail->val = i;
    		}
		} 
		tail->next = head;
		ListNode *t = tail;
		while(n>1){
			int cut = m%n;
			for (int i = 0; i < cut; ++i)
			{
				t=t->next;
			}
			ListNode *p = t->next;
			t->next = p->next;
			cout<<p->val<<endl;
			n--;
		}
		return t->val;
    }
};

int main(){
    Solution s;
    cout<<s.LastRemaining_Solution(5,3)<<endl;
}