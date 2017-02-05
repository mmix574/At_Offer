#include <iostream>
#include <vector>
#include <set>
using namespace std;

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/

class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        set<ListNode*> S;
        while(pHead1!=NULL){
            S.insert(pHead1);
            pHead1 = pHead1->next;
        }
        while(pHead2!=NULL){
            if(S.find(pHead2)!=S.end()){
                return pHead2;
            }
            pHead2 = pHead2->next;
        }
        return NULL;
    }
};

int main(){
    Solution s;
    return 0;
}