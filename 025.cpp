#include <iostream>

using namespace std;


struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};

class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if(pHead==NULL){return NULL;}
        RandomListNode *head=NULL,*tail=NULL;
        while(pHead!=NULL){
            RandomListNode *p = (RandomListNode *)malloc(sizeof(RandomListNode));

            p->label = pHead->label;
            p->next = NULL;

        }
    }
};

int main(){

    return 0;
}