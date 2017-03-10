#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int > > res;
        for (int i = 1; i <= sum/2; ++i)
        {
        	int t_sum = 0;
        	int j = i;
        	vector<int> t_res;
        	while(t_sum<=sum){
        		if(t_sum<sum){
        			t_res.push_back(j);
        			t_sum+=(j++);
        		}else if(t_sum == sum){
        			res.push_back(t_res);
        			break;
        		}else{
        			break;
        		}
        	}
        }
        return res;
    }
};

void print(vector<int> &data){
	for (int i = 0; i < data.size(); ++i)
	{
		printf("%d ",data[i]);
	}
	printf("\n");
}

int main(){
	Solution s;
	vector<vector<int>> res = s.FindContinuousSequence(200);
	cout<<res.size()<<endl;
	for (int i = 0; i < res.size(); ++i)
	{
		print(res[i]);
	}
	return 0;
}