//
// Created by taita on 16/8/18.
//

#ifndef AT_OFFER_LISTNODE_H
#define AT_OFFER_LISTNODE_H

#endif //AT_OFFER_LISTNODE_H


#include <iostream>
#include <vector>
using namespace std;

namespace Lists {

    struct ListNode {
        int val;
        struct ListNode *next;

        ListNode(int x) :
                val(x), next(NULL) {
        }
    };

    ListNode *create(vector<int> data){
        ListNode * rs = NULL;
        ListNode * tail =NULL;
        int len = data.size();
        for (int i = 0; i < len; ++i) {
            ListNode * t = (ListNode *)malloc(sizeof(ListNode));
            t->val = data[i];
            t->next = NULL;
            if(!rs){
                rs = tail = t;
            }else{
                tail->next = t;
                tail = t;
            }
        }
    }

    void Traverse(ListNode *head){
        while (head){
            cout<<head->val<<" ";
            head = head->next;
        }
    }

}