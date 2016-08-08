#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;


void print_matrix(vector<vector<int> > &data){
	if(data.size()){
		for (int i = 0; i < data.size(); ++i)
		{
			vector<int> row = data[i];
			cout<<i<<":";
			for (int j = 0; j < row.size(); ++j)
			{
				cout<<setw(3)<<row[j]<<" ";
			}
			cout<<endl;
		}
	}
}
void print_list(vector<int> list){
	int list_size = list.size();
	for (int i = 0; i < list_size; ++i)
	{
		cout<<list[i]<<"-";
	}
	cout<<endl;
}

class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
		vector<int> r_s;
		return r_s;
    }
};


#define ROW_NUM 5
#define COL_NUM 3


int main(){

	vector<vector<int> > test_case;

	for (int i = 0; i < ROW_NUM ;++i)
	{
		vector<int> t;
		for (int j = 1; j <= COL_NUM; ++j)
		{
			t.push_back(5*i+j);
		}
		test_case.push_back(t);
	}

	print_matrix(test_case);

	Solution s;
	print_list(s.printMatrix(test_case));

	return 0;
}