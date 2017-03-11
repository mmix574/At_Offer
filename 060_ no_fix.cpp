#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int InversePairs(vector<int> &data) {
    	vector<int> buf;
    	buf.resize(data.size());
        int res = msort(data,0,data.size()-1,buf);
        return res;
    }
    int msort(vector<int> &data,int start,int end,vector<int> &buffer){
    	if(start>=end){
    		return 0;
    	}
    	int mid = (start+end)/2;
    	int a = msort(data,start,mid,buffer);
    	int b = msort(data,mid+1,end,buffer);
    	int c = merge(data,start,mid,end,buffer);
    	return (a+b+c)%1000000007;
    }
    int merge(vector<int> &data,int start,int mid,int end,vector<int> &buffer){
    	for (int i = start; i <= end; ++i)
    	{
    		buffer[i] = data[i];
    	}
    	int count = 0;
    	int p1 = start;
    	int p2 = mid+1;
    	int i = start;
    	while(p1<=mid&&p2<=end){
    		if(buffer[p1]<=buffer[p2]){
    			data[i++] = buffer[p1++];
    		}else{
    			data[i++] = buffer[p2++];
				count+=(mid-p1+1);
    		}
    	}
    	while(p1<=mid){
    		data[i++] = buffer[p1++];
    	}
    	while(p2<=end){
    		data[i++] = buffer[p2++];
    	}
    	return count%1000000007;
    }
};


void print(vector<int> &data){
	for (int i = 0; i < data.size(); ++i)
	{
		cout<<data[i];
		cout<<" ";
	}
	cout<<endl;
}

int main(){
	vector<int> data_set = {1,9,3,4,5,6,7,0};
	Solution s;
	cout<<s.InversePairs(data_set)<<endl;


	print(data_set);
	return 0;
}