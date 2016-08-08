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
        int row = matrix.size();
        int col = matrix[0].size();
        int loop_count = ((row<col?row:col)+1)/2;

        if(row==1){
            return matrix[0];
        }else if(col==1){
            for (int i = 0; i < row; ++i) {
                r_s.push_back(matrix[i][0]);
            }
            return r_s;
        }
        cout<<loop_count<<endl;
        for (int loop = 0; loop < loop_count; ++loop) {
            for (int i = loop; i < col-loop-1; ++i) {
                r_s.push_back(matrix[loop][i]);
//                cout<<matrix[loop][i]<<" ";
            }
            for (int i = loop; i < row-loop-1; ++i) {
                r_s.push_back(matrix[i][row-loop-1]);
//                cout<<matrix[i][row-loop-1]<<" ";
            }
            for (int i = col-1-loop; i >loop; i--) {
                r_s.push_back(matrix[row-1-loop][i]);
//                cout<<matrix[row-1-loop][i]<<" ";
            }
            for (int i = row-1-loop; i > loop; i--) {
//                cout<<matrix[i][loop]<<" ";
                r_s.push_back(matrix[i][loop]);
            }
        }

		return r_s;
    }
};


#define ROW_NUM 5
#define COL_NUM 5


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