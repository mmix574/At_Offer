#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
    	sort(data.begin(),data.end());
    	for (int i = 0; i < data.size(); ++i)
    	{
    		cout<<data[i]<<endl;
    	}

    	int t_num = data[0];
    	int t_count = 1;
    	vector<int> res;
    	for (int i = 1; i < data.size(); i++)
    	{
    		if(data[i]==t_num){
    			t_count++;
    		}else{
    			if(t_count==1){
    				res.push_back(t_num);
    				t_num = data[i];
    			}else{
    				t_num = data[i];
    				t_count = 1;
    			}
    		}
    	}
    	if(t_count==1){
    		res.push_back(t_num);
    	}
    	*num1 = res[0];
    	*num2 = res[1];
    }
};

int main(){
	vector<int> data_set = {2,4,3,6,3,2,5,5};
	Solution s;
	int a,b;
	s.FindNumsAppearOnce(data_set,&a,&b);

	cout<<a<<endl;
	cout<<b<<endl;
	return 0;
}