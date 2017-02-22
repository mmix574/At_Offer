#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> nums;
	int p2 = 0;
	int p3 = 0;
	int p5 = 0;
	Solution(){
		nums.push_back(1);
	}

    int GetUglyNumber_Solution(int index) {
    	while(nums.size()<index){
    		int two = nums[p2]*2;
    		int three = nums[p3]*3;
    		int five = nums[p5]*5;
    		if(two<=three&&two<=five){
	    		if(nums[nums.size()-1]!=two){
	    			nums.push_back(two);
	    		}
	    		p2++;
	    	}else if(three<=two&&three<=five){
	    		if(nums[nums.size()-1]!=three){
		    		nums.push_back(three);
	    		}
	    		p3++;
	    	}else{
	    		if(nums[nums.size()-1]!=five){
		    		nums.push_back(five);
	    		}
	    		p5++;
	    	}
    	}
    	return nums[index-1];
    }
};

int main(){
    Solution s;
    cout<<s.GetUglyNumber_Solution(6)<<endl;
    return 0;
}