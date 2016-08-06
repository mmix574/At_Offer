#include <iostream>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
void print_list(struct ListNode *head){
    if(head){
        while(head->next!=NULL){
            cout<<head->val<<"->";
            head=head->next;
        }
        cout<<head->val<<endl;
    }
}
class Solution {
public:
    ListNode * popTail(struct ListNode * head){
        struct ListNode * t = head;
        if(!t){return NULL;}
        else if(!t->next){
            return t;
        }
        else if(!t->next->next){
            struct ListNode *tail = t->next;
            t->next=NULL;
            return tail;
        }

        while(t->next->next!=NULL){
            t=t->next;
        }
        struct ListNode *tail = t->next;
        t->next = NULL;

        return tail;
    }
    ListNode* ReverseList(ListNode* pHead) {

        if(!pHead){return NULL;}
        else if(!pHead->next){
            return pHead;
        }else{
            struct ListNode * r_s = NULL;
            struct ListNode * r_s_tail = NULL;

            struct ListNode *q =popTail(pHead) ;

            r_s = r_s_tail = q;

            q = popTail(pHead) ;
            while(q!=pHead){
                r_s_tail->next = q;
                r_s_tail=r_s_tail->next;
                q = popTail(pHead) ;
            }
            r_s_tail->next = q;

            return r_s;
        }
    }
};



int main(){
    Solution s;
    struct ListNode head(0);
    struct ListNode *t =&head;

    for (int i = 1; i < 10; ++i) {
        struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
        p->val = i;
        p->next = NULL;

        t->next = p;
        t = t->next;

    }
    print_list(&head);
    cout<<endl;
    cout<<endl;


    print_list(s.ReverseList(&head));

    return 0;
}