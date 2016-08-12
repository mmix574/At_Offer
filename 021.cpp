#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    void stack_print(stack<int> s){
        while (!s.size()){
            cout<<s.top()<<" ";
            s.pop();
        }
    }

    int find(vector<int > &data,int something){
        int len = data.size();
        for (int i = 0; i < len; ++i) {
            if(data[i]==something){
                return i;
            }
        }
        return -1;
    }

    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        if(!popV.size()||popV.size()!=pushV.size()){
            return false;
        }
        int len = popV.size();

        stack<int> ss;
        int push_pos=0;
        for (int i = 0; i < len; ++i) {
            
            stack_print(ss);

            if(pushV[push_pos]==popV[i]){
                push_pos++;
                continue;
            }else{
                int pos = find(pushV,popV[i]);
                if(pos>push_pos){
                    for (int j = push_pos; j <= pos; ++j) {
                        ss.push(pushV[j]);
                    }
                }else{
                    if(ss.empty()){
                        return false;
                    }else if(ss.top()==popV[i]){
                        ss.pop();
                        push_pos++;
                    }else{
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

int main(){
    vector<int> pushV = {1,2,3,4,5};
    vector<int >popV = {3,4,1,5,2};

    Solution s;
    cout<<s.IsPopOrder(pushV,popV)<<endl;
    return 0;
}