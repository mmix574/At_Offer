//
// Created by taita on 2017/2/11.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
	void print(vector<int> &data){
		for (int i = 0; i < data.size(); ++i)
		{
			cout<<data[i];
			cout<<" ";
		}
		cout<<endl;
	}
    bool IsContinuous( vector<int> numbers ) {
    	if(numbers.size()!=5){
    		return false;
    	}
    	sort(numbers.begin(),numbers.end());
    	int start = 0;
    	int end = numbers.size()-1;
    	while(numbers[start]==0){
    		start++;
    	}
    	if(end-start==0){
    		return true;
    	}
    	int zero = start;
    	int i = start+1;
    	int last = numbers[start];
		while(i<=end){
			// cout<<last<<numbers[i]<<endl;
			if(last==numbers[i]){
				return false;
			}else if(last+1<numbers[i]){
				if(zero){
					zero--;
					last++;
				}else{
					return false;
				}
			}else{
				// (last+1==numbers[i])
				last = numbers[i];
				i++;
			}
		}    	
		return true;
    }
};

int main(){
    Solution s;
    // vector<int> data = {7,8,11,0,0};
    vector<int> data = {1,2,3,6,0};
   cout<<s.IsContinuous(data)<<endl;
    // cout<<data.size()<<endl;
    return 0;
}