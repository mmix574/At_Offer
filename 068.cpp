#include <iostream>
using namespace std;

class Solution {
public:
    int trsum(int a,int b){
    	int sum = 0;
    	while(a%10){
    		sum+=(a%10);
    		a/=10;
    	}
    	while(b%10){
    		sum+=(b%10);
    		b/=10;
    	}
    	return sum;
    }
    int movingCount(int threshold, int rows, int cols)
    {
    	int sum = 0;
    	for (int i = 0; i < rows; ++i)
    	{
    		for (int j = 0; j < cols; ++j)
    		{
    			if(trsum(i,j)<=threshold){
    				sum++;
    			}
    		}
    	}
        return sum;
    }
};

int main(){
	Solution s;
	cout<<s.movingCount(10,1,100)<<endl;
	return 0;
}