#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int len = array.size();
        if(!len){return 0;}

        bool init = false;

        int max = array[0];
        int sum = 0;
        for (int i = 0; i < array.size(); ++i) {
            sum+=array[i];
            if(max<sum){
                max = sum;
            }

            if(sum<0){
                sum = 0;
            }

        }
        return max;
    }
};

int main(){
    vector<int > v = {-2,-8,-1,-5,-9};
    Solution s;
    int n = s.FindGreatestSumOfSubArray(v);

    cout<<n<<endl;



    return 0;
}