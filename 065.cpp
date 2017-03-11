#include <iostream>
using namespace std;

class Solution {
public:
	int len = 0;
	int buf[10000];
    void Insert(int num)
    {
    	int p = 0;
    	for (int i = 0; i < len; ++i)
    	{
    		if(num>buf[i]){
    			p++;
    		}else{
    			for (int i = len; i > p ; i--)
    			{
    				buf[i] = buf[i-1];
    			}
    			break;
    		}
    	}
    	buf[p] = num;
    	len++;
    }
    double GetMedian()
    { 
    	if(!len){
    		return 0;
    	}else if(len%2==1){
    		return buf[len/2];
    	}else{
    		int a = buf[len/2];
    		int b = buf[(len-1)/2];
    		return (a+b)/2.0;
    	}
    }

};

int main(){
	return 0;
}