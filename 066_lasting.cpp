#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int> res(num);
        int length = num.size();
        if(length<size){
        	return res;
        }
        for (int i = 0; i <= length-size; ++i)
        {
        	for (int j = i; j < i+size; j++)
        	{
        		for(int k = i;k < i+size; k++){
        			if(res[k]<num[j]){
        				res[k] = num[j];
        			}
        		}
        	}
        }
        return res;
    }
};

int main(){
	Solution s;
	vector<int> data_set = {2,3,4,2,6,2,5,1};
	vector<int> res = s.maxInWindows(data_set,3);
	for (int i = 0; i < res.size(); ++i)
	{
		cout<<res[i];
		cout<<" ";
	}
	cout<<endl;
	return 0;
}