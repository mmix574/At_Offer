//
// Created by taita on 2017/2/11.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int LastRemaining_Solution(int n, int m)
    {
        vector<int> student;
        int currentPosition = 0;
        for (int i = 0; i < n; ++i) {
            student.push_back(i);
        }
        while(student.size()>1){
            int currentPosition = (currentPosition + m -1)%student.size();
            student.erase(student.begin()+currentPosition);
            if(currentPosition==student.size()){
                currentPosition = 0;
            }
        }
        return student[0];
    }
};

int main(){
    Solution s;
    cout<<s.LastRemaining_Solution(100,7)<<endl;

}