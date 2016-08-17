#include <iostream>
#include <vector>
#include <map>

using namespace std;


struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};


void ListPrint(RandomListNode * head){
    while (head){
        cout<<head->label<<"->";
        head = head ->next;
    }
}

RandomListNode * create(vector<int> initdata){
    int size = initdata.size();
    RandomListNode * head = NULL;
    RandomListNode * tail = NULL;
    for (int i = 0; i < size; ++i) {
        if(!head){
            head = tail = (RandomListNode *)malloc(sizeof(RandomListNode));
            head ->next = NULL;
            head ->label = initdata[i];
            head ->random = NULL;
        }else{
            tail->next = (RandomListNode *)malloc(sizeof(RandomListNode));
            tail = tail->next;
            tail->label=initdata[i];
            tail->random = NULL;
            tail->next = NULL;
        }
    }
    return head;
}

class Solution {
public:

    map<int,int> d_mapping;
    map<int,RandomListNode **> p_mapping;
    map<int,RandomListNode *> n_mapping;

    int rorder (RandomListNode *p){
        int len = 0 ;
        while (p){
            len++;
            p=p->next;
        }
        return len;
    };

    RandomListNode* Clone(RandomListNode* pHead)
    {
        if(pHead==NULL){return NULL;}
        RandomListNode * tHead = pHead;

        //int len = 0;
        //while(tHead){
        //  len ++;
        //tHead=tHead->next;
        //}

        RandomListNode *head=NULL,*tail=NULL;
        //int pos = 0;
        tHead = pHead;

        while(tHead!=NULL){
            if(tHead->random){
                d_mapping[rorder(tHead)] = rorder(tHead->random);
            }
            RandomListNode *p = (RandomListNode *)malloc(sizeof(RandomListNode));
            if(!head){
                head = tail = p;
                p->label = tHead->label;
                p->next = NULL;
                p->random = NULL;
            }else{
                p->label = tHead->label;
                p->next = NULL;
                p->random = NULL;
                tail->next = p;
                tail = p;
            }
            n_mapping[rorder(tHead)] = p;
            p_mapping[rorder(tHead)] = &(p->next);
            tHead = tHead->next;
        }
        map<int,int>::iterator itr;
        for(itr = d_mapping.begin();itr!=d_mapping.end();itr++){
            *(p_mapping[itr->first]) = n_mapping[itr->second];
        }
        return head;
    }
};

int main(){
    int a = clock();

    vector<int> v ;
    for (int i = 0; i < 10000; ++i) {
        v.push_back(i);
    }

    RandomListNode *p = create(v);

    Solution s;
    RandomListNode * newList = s.Clone(p);
    ListPrint(newList);

    int b = clock();
    printf("total time %d",b-a);
    return 0;
}