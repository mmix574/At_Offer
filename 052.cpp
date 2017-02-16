//
// Created by taita on 2017/2/16.
//

#include <iostream>
#include <vector>
using namespace std;

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    vector<ListNode *> l;

    bool duplicate(ListNode * p){
        for (int i = 0; i < l.size(); ++i) {
            if(l[i] == p){
                return true;
            }
        }
        return false;
    }

    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        while(pHead!=NULL){
            if(duplicate(pHead)){
                return pHead;
            }else{
                l.push_back(pHead);
                pHead = pHead->next;
            }
        }
        return NULL;
    }
};

int main(){


    return 0;
}