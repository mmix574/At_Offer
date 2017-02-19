//
// Created by taita on 2017/2/16.
//
//https://www.nowcoder.com/practice/fc533c45b73a41b0b44ccba763f866ef?tpId=13&tqId=11209&rp=3&ru=%2Fta%2Fcoding-interviews&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking

#include <iostream>
#include <vector>
#include <ListNode.h>


struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

class Solution {
public:
        ListNode* deleteDuplication(ListNode* pHead)
    {
        if(!pHead||!pHead->next){return pHead;}
        else if(pHead->val==pHead->next->val){
            int delete_val = pHead->val;
            while(pHead&&pHead->val==delete_val){
                pHead=pHead->next;
            }
            return deleteDuplication(pHead);
        }else{
            ListNode* r = pHead;
            r->next = deleteDuplication(r->next);
            return r;
        }
    }
};

int main() {
    Solution s;
}