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


    map<RandomListNode *,int > bef;
    map<int,RandomListNode * > aft;

    RandomListNode* Clone(RandomListNode* pHead)
    {
        RandomListNode * t = pHead;
        RandomListNode * head = NULL;
        RandomListNode * tail = NULL;
        int i = 0;
        while(t){
            bef[t] = i;
            RandomListNode *p = (RandomListNode *)malloc(sizeof(RandomListNode));
            aft[i] = p;
            i++;
            p->random = NULL;
            p->next = NULL;
            p->label = t->label;

            if(!head){
                head = tail = p;
            }else{
                tail->next = p;
                tail = p;
            }
            t=t->next;
        }
        t = pHead;
        while(t){
            if(t->random){
                int a = bef[t];
                int b = bef[t->random];
                aft[a] ->random = aft[b];
            }
            t=t->next;
        }

        return head;
    }
};

int main(){
    int a = clock();

    vector<int> v ;
    for (int i = 0; i < 100; ++i) {
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