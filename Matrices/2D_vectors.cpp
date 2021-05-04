#include <bits/stdc++.h>
using namespace std;


void Print(vector<vector<int>> matrix ){

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
	vector<vector<int>> matrix(3,vector<int>(4)); // means 3*4 matrix;
	Print(matrix);
}