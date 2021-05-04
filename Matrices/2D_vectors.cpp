#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> input()
{
	int i,j;
	//take input for row i, take input for col j
	vector<vector<int>> data;
	int n=4;
	int m=3;

	for(int i=0;i<4;i++){
		vector<int> row(m);
		for(int j=0;j<m;j++){
			row.push_back(i*j); // inputs can be taken for column here 
		}
		data.push_back(row);
	}
	return data;
}

void Print(vector<vector<int>> &matrix ){

	cout<<"Total Row:-->"<<matrix.size()<<endl;
	for(vector<int> row: matrix){
		cout<<"\t["<<row.size()<<"] -> ";
		for(int column : row) 
			cout<<column<< " ";
		cout<<endl;
	}
	cout<<endl;
}

int main()
{
	//vector<vector<int>> matrix(3,vector<int>(4,5)); // means 3*4 matrix;
	//the 4,5 under the brackets decide that the column number of the matrix 
	//and initial value of each element.

	//another declaration
	//vector<vector<int>> matrix({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14},{16,17,18,19,20}});

	//another method
	vector<vector<int>> matrix;

	vector<int> row1;
	row1.push_back(1);
	row1.push_back(2);
	row1.push_back(3);
	matrix.push_back(row1);

	vector<int> row2;
	row2.push_back(5);
	row2.push_back(6);
	row2.push_back(7);
	matrix.push_back(row2);

	vector<int> row3;
	row3.push_back(8);
	row3.push_back(9);
	row3.push_back(10);
	row3.push_back(11);
	matrix.push_back(row3);

	vector<int> row4;
	row4.push_back(8);
	row4.push_back(9);
	row4.push_back(10);
	row4.push_back(11);
	matrix.push_back(row4);


	Print(matrix);

	row4.clear();

	Print(matrix);
	cout<<endl;

	//How to take vector inputs if dynamically;

	vector<vector<int>> ans = input();

	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[0].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}

}