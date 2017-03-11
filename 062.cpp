#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        vector<int> res;
    	if(array.size()<=1){
    		return res;
    	}
        int i = 0;
        int j = array.size()-1;
        while(i+1<j){
        	if(array[i]+array[j]==sum){
        		res.push_back(array[i]);
        		res.push_back(array[j]);
        		return res;
        	}else if(array[i+1]+array[j]==sum){
        		res.push_back(array[i+1]);
        		res.push_back(array[j]);
        		return res;
        	}else if(array[i]+array[j-1]==sum){
        		res.push_back(array[i]);
        		res.push_back(array[j-1]);
        		return res;
        	}else{
        		i+=1;
        		j-=1;
        	}
        }
        if(i!=j&&array[i]+array[j]==sum){
        	res.push_back(array[i]);
        	res.push_back(array[j]);
        	return res;
        }
        return res; 
    }
};

int main(){
	Solution s;
	vector<int> 
	s.FindNumbersWithSum()
	return 0;
}