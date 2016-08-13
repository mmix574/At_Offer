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

class Solution {
public:
    map<int,int> mapping;

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
//    cout<<m[3]<<endl;
    return 0;
}