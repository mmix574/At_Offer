#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveForward(vector<int> &array,int pos){
        int len = array.size();
        for (int i = pos; i < len; ++i) {
            array[i-1] = array[i];
        }
    }
    void reOrderArray(vector<int> &array) {
        int len = array.size();
        int even_count = 0;
        for (int i = 0; i < len-even_count; ++i) {
            if(array[i]%2==0){
                int t = array[i];
                moveForward(array,i+1);
                even_count++;
                i--;
                array[len-1] = t;
            }else{

            }
        }
    }
};

void print_vector_list(vector<int> &list){
    int len = list.size();
    for (int i = 0; i < len ; ++i) {
        cout<<list[i]<<" ";
    }
    cout<<endl;
}

int main(){
    Solution s;
    vector<int> test_case = {1,2,3,4,5,6,7};
    print_vector_list(test_case);
//    s.reOrderArray(test_case);
//    s.moveForward(test_case,3);
    s.reOrderArray(test_case);
    print_vector_list(test_case);

    return 0;
}