#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> data;
    void push(int value) {
        data.push_back(value);
    }
    void pop() {
        data.pop_back();
    }
    int top() {
        if(!data.size()){return  -1;}
        else{
            return data[data.size()-1];
        }
    }
    int min() {
        int r_s = data[0];
        for (int i = 0; i < data.size(); ++i) {
            if(data[i]<r_s){
                r_s=data[i];
            }
        }
        return r_s;
    }
};

int main() {
    Solution s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.min()<<endl;
    return 0;
}