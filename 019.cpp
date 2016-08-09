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
        int odd = (row<col?row:col)%2;

        if(row==1){
            return matrix[0];
        }else if(col==1){
            for (int i = 0; i < row; ++i) {
                r_s.push_back(matrix[i][0]);
            }
            return r_s;
        }

        for (int loop = 0; loop < loop_count; ++loop) {

            for (int x = loop; x < col-loop; ++x) {
                r_s.push_back(matrix[loop][x]);
            }
            for (int y= loop+1; y <row-loop-1 ; y++) {
                r_s.push_back(matrix[y][col-1-loop]);
            }
            if(!(odd&&loop==loop_count-1)){
                for (int x = col-1-loop; x >loop-1 ; x--) {
                    r_s.push_back(matrix[row-1-loop][x]);
                }
            }
            for(int y=row-2-loop;y>loop;y--) {
                r_s.push_back(matrix[y][loop]);
            }
        }


		return r_s;
    }
};


#define ROW_NUM 6
#define COL_NUM 1


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