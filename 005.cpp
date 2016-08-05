#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
public:
    void push(int node) {
        if(stack1.size()){
            stack1.push(node);
        }else{
            while(stack2.size()){
                stack1.push(stack2.top());
                stack2.top();
            }
            stack1.push(node);
        }
    }

    int pop() {
        if(!stack1.size()&&!stack2.size()){
            return -1;
        }
        else if(stack2.size()){
            int r_s = stack2.top();
            stack2.pop();
            return r_s;
        }else{
            while(stack1.size()){
                stack2.push(stack1.top());
                stack1.pop();
            }
            int r_s = stack2.top();
            stack2.pop();
            return r_s;
        }
    }

private:
    stack<int> stack1;//for in
    stack<int> stack2;//for out
};


int main(){
    Solution s ;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    return 0;
}