#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;


struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

struct ListNode * createList(vector<int> &data){
	int size = data.size();
	struct ListNode * r_s = NULL;
	struct ListNode * r_s_tail = NULL;
	for (int i = 0; i < size; ++i)
	{
		struct ListNode * p = (struct ListNode *)malloc(sizeof(struct ListNode));
		p->val = data[i];
		p->next = NULL;

		if(!r_s){
			r_s = r_s_tail = p;
		}else{
			r_s_tail->next = p;
			r_s_tail =  r_s_tail->next;
		}

	}

	return r_s;
}

void print_list(struct ListNode *head){
	if(!head){return;}
	else{
		while(head->next){
			cout<<head->val<<"->";
			head = head ->next;
		}
		cout<<head->val<<endl;
	}

}

class Solution {
public:
	ListNode* getTail(struct ListNode * head){
		if(!head){return NULL;}
		else if(!head->next){
			return head;
		}else{
			while(head->next->next){
				head=head->next;
			}
			return head->next;
		}
	}
	ListNode * popHead(struct ListNode * head){
		if(!head){return NULL;}
		else{
			return head->next;
		}
	}

	ListNode * popTail(struct ListNode *head){
		struct ListNode *t = head;
		if(!t){return NULL;}
		else if(!t->next){
			return NULL;
		}else{
			while(t->next->next){
				t=t->next;
			}
			t->next = NULL;
			return head;
		}
	}

	// Decent 
  //   ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
  //   {
		// struct ListNode * r_s = NULL;
		// struct ListNode * r_s_tail = NULL;

		// struct ListNode * t1 = getTail(pHead1);
		// struct ListNode * t2 = getTail(pHead2);
		// while(t1||t2){
		// 	if(!t1){
		// 		if(!r_s){
		// 			r_s = t2 ;
		// 			r_s_tail = t2;
		// 		}else{
		// 			r_s_tail ->next = t2;
		// 			r_s_tail = r_s_tail->next;
		// 		}
		// 		pHead2 = popTail(pHead2);
		// 	}else if(!t2){
		// 		if(!r_s){
		// 			r_s = t1;
		// 			r_s_tail = t1;
		// 		}else{
		// 			r_s_tail ->next = t1;
		// 			r_s_tail = r_s_tail->next;
		// 		}
		// 		pHead1 = popTail(pHead1);
		// 	}else{
		// 		// cout<<"here?"<<endl;
		// 		if(t1->val>t2->val){
		// 			if(!r_s){
		// 				r_s = t1;
		// 				r_s_tail = t1;
		// 			}else{
		// 				r_s_tail->next = t1;
		// 				r_s_tail = r_s_tail->next;
		// 			}
		// 			pHead1 = popTail(pHead1);
		// 		}else{
		// 			if(!r_s){
		// 				r_s = t2;
		// 				r_s_tail = t2;
		// 			}else{
		// 				r_s_tail->next = t2;
		// 				r_s_tail = r_s_tail->next;
		// 			}
		// 			pHead2 = popTail(pHead2);
		// 		}
		// 	}
		// 	t1 = getTail(pHead1);
		// 	t2 = getTail(pHead2);
		// }		
  //       return r_s;
  //   }


	//Ascent
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        struct ListNode * r_s = NULL;
        struct ListNode * r_s_tail = NULL;

        while(pHead1||pHead2){
        	print_list(pHead1);
        	print_list(pHead2);
        	print_list(r_s);
        	cout<<"debuging..."<<endl;
        	if(!pHead1){
        		if(!r_s){
        			r_s = r_s_tail = pHead2;
        			pHead2 = popHead(pHead2);
        			r_s_tail->next= NULL;
        		}else{
        			r_s_tail->next= pHead2;
        			pHead2 = popHead(pHead2);
        			r_s_tail = r_s_tail->next;
        			r_s_tail->next = NULL;
        		}
        	}else if(!pHead2){
        		if(!r_s){
        			r_s = r_s_tail = pHead1;
        			pHead1 = popHead(pHead1);
        			r_s_tail->next= NULL;
        		}else{
        			r_s_tail->next= pHead1;
        			pHead1 = popHead(pHead1);
        			r_s_tail = r_s_tail->next;
        			r_s_tail->next = NULL;
        		}
        	}else{
        		if(pHead1->val<pHead2->val){
	        		if(!r_s){
	        			r_s = r_s_tail = pHead1;
	        			pHead1 = popHead(pHead1);
	        			r_s_tail->next= NULL;
	        		}else{
	        			r_s_tail->next= pHead1;
	        			pHead1 = popHead(pHead1);
	        			r_s_tail = r_s_tail->next;
	        			r_s_tail->next = NULL;
	        		}
        		}else{
	        		if(!r_s){
	        			r_s = r_s_tail = pHead2;
	        			pHead2 = popHead(pHead2);
	        			r_s_tail->next= NULL;
	        		}else{
	        			r_s_tail->next= pHead2;
	        			pHead2 = popHead(pHead2);
	        			r_s_tail = r_s_tail->next;
	        			r_s_tail->next = NULL;
	        		}
        		}
        	}
        }
        return r_s;
    }
};



int main(){
	// struct ListNode *head =NULL;
	// struct ListNode *tail =NULL;
	// for (int i = 0; i < 2; ++i)
	// {
	// 	struct ListNode * p = (struct ListNode *)malloc(sizeof(struct ListNode));
	// 	p->val = i;
	// 	p->next = NULL;
	// 	if(!head){
	// 		head = p;
	// 		tail = p;
	// 	}else{
	// 		tail->next=p;
	// 		tail = tail->next;
	// 	}
	// }
	// Solution s;

	// print_list(head);
	// cout<<endl;	cout<<endl;	cout<<endl;
	// print_list(head);


	// print_list(s.getTail(head));
	int data_a[6] = {1,2,6,5,9,33};
	vector<int> v_data_a(data_a,data_a+6);
	struct ListNode * a  = createList(v_data_a);
	
	int data_b[6] = {3,4,5,7,9,11};
	vector<int> v_data_b(data_b,data_b+6);
	struct ListNode * b = createList(v_data_b);

	print_list(a);
	cout<<endl;
	cout<<endl;
	cout<<endl;
	print_list(b);
	Solution s;
	cout<<endl;
	cout<<endl;
	print_list(s.Merge(a,b));

	return 0;
}