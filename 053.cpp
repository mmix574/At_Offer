//
// Created by taita on 2017/2/16.
//

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/

//https://www.nowcoder.com/practice/fc533c45b73a41b0b44ccba763f866ef?tpId=13&tqId=11209&rp=3&ru=%2Fta%2Fcoding-interviews&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        ListNode *r = NULL;
        while(pHead->next!=NULL&&pHead->val!=pHead->next->val){
            pHead=pHead->next;
        }
        if(pHead->next==NULL){
            return NULL;
        }else{
            r = pHead;
        }


        return r;
    }
};