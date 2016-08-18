#include <iostream>
#include <vector>
#include <map>

using namespace std;


class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int len = numbers.size();
        map<int,int> log ;
        for (int i = 0; i < len; ++i) {
            map<int,int >::iterator ite ;
            ite = log.find(numbers[i]);
            if(ite!=log.end()){
                (ite->second)+=1;
            }else{
                log[numbers[i]] = 1;
            }
        }

        map<int,int>::iterator ite;
        for (ite = log.begin();ite!=log.end();ite++){
            if(ite->second>len/2){
                return ite->first;
            }
        }
        return 0;
    }
};

int main(){
    Solution s;
    vector<int> v = {1,2,2,2,2,2,3,4,5};

    cout<<s.MoreThanHalfNum_Solution(v)<<endl;

    return 0;
}