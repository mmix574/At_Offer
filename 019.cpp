#include <iostream>
#include <vector>
#include <iomanip>
// #include <list>

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
		// base
		int matrix_size = matrix.size();
		if(matrix_size==0){
			return r_s;
		}
		else if(matrix_size==1){
			return matrix[0];
		}else{
			for(int loop = 0;loop<(matrix_size+1)/2;loop++){
				//1
				for (int i = loop; i < matrix_size-loop; ++i)
				{	
					r_s.push_back(matrix[loop][i]);
				}
				print_list(r_s);
				// 2
				for (int i = loop+1; i <matrix_size-loop-1; ++i)
				{
					r_s.push_back(matrix[i][matrix_size-loop-1]);
				}
				print_list(r_s);
				// 3
				for (int i = matrix_size-loop-1; i >=loop; i--)
				{	if(matrix_size-loop-1==loop){break;}
					r_s.push_back(matrix[matrix_size-loop-1][i]);
				}
				print_list(r_s);
				// 4
				for (int i = matrix_size-loop-2; i >loop ; i--)
				{
					r_s.push_back(matrix[i][loop]);
				}
				print_list(r_s);
			}
		}
		return r_s;    	
    }
};

int main(){

	vector<vector<int> > test_case;

	for (int i = 0; i < 5; ++i)
	{
		vector<int> t;
		for (int j = 1; j <= 5; ++j)
		{
			t.push_back(5*i+j);
		}
		test_case.push_back(t);
	}

	print_matrix(test_case);
	Solution s;
	print_list(s.printMatrix(test_case));
	// vector<int> l1 = 

	// vector<int> a = {1,2,3,4,5,6};
	// vector<int> b = {2,3,4,5,6};


	return 0;
}