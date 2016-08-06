#include <iostream>

using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        struct ListNode * t = pListHead;

        int len = 0;
        if(t){
            while(t->next!=NULL){
                len++;
                t=t->next;
            }
            len++;
        }

        if(k>len){
            return NULL;
        }else{
            int deep = len - k;
            for (int i = 0; i < deep; ++i) {
                pListHead = pListHead-> next;
            }
            return pListHead;
        }
        return NULL;
    }
};

void print_list(struct ListNode *head){
    if(head){
        while(head->next!=NULL){
            cout<<head->val<<endl;
            head=head->next;
        }
        cout<<head->val<<endl;
    }
}


int main(){
    Solution s;
    struct ListNode head(-1);
    struct ListNode *p = &head;
    for (int i = 0; i < 10 ; ++i) {
        struct ListNode * t = (struct ListNode *)malloc(sizeof(struct ListNode));
        t->val = i;
        t->next = NULL;
        p->next = t ;
        p=p->next;
    }

    print_list(&head);
    cout<<endl;
    cout<<endl;
    print_list(s.FindKthToTail(&head,5));

    return 0;
}