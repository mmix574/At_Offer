#include <iostream>
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
    while (!head){
        cout<<head->label<<"->";
        head = head ->next;
    }
}

class Solution {
public:
//    position => label
    map<int,int> l_mapping;
//    new LinkedList label =>random pointer
    map<int,RandomListNode **> p_mapping;

    RandomListNode* Clone(RandomListNode* pHead)
    {
        if(pHead==NULL){return NULL;}
        RandomListNode * tHead = pHead;
        int len = 0;
        while(tHead){
            len ++;
            tHead=tHead->next;
        }

        RandomListNode *head=NULL,*tail=NULL;
        int pos = 0;tHead = pHead;

        while(tHead!=NULL){
            if(tHead->random!=NULL){
                l_mapping[tHead->label] = tHead->random->label;
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
            p_mapping[tHead->label] = &(p->next);
            tHead = tHead->next;
        }
        map<int,int>::iterator itr;
        for(itr = l_mapping.begin();itr!=l_mapping.end();itr++){
            *(p_mapping[itr->first]) = *(p_mapping[itr->second]);
        }
        return head;
    }
};

int main(){
    map<int,int > m;
    m.insert(map<int,int>::value_type(1,2));
    m.insert(map<int,int>::value_type(1,3));//invalid
    m.insert(pair<int,int>(2,2));
    m.insert(pair<int,int>(3,2));

    map<int,int>::iterator itr;
    m[4] = 5;
    for(itr = m.begin();itr!=m.end();itr++){
        cout<<itr->first<<"->"<<itr->second<<endl;
    }
    itr = m.find(5);


    if(itr!=m.end()){
        cout<<itr->second<<endl;
    }

    return 0;
}