
#include<bits/stdc++.h>
using namespace std;


class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    int n = str.size();
		    int matrix[n+1][n+1];
		    
		    for(int i=0; i<=n ; i++){
		        for(int j=0; j<=n ; j++){
		            if(i==0 or j==0){
		                matrix[i][j] =0;
		            }
		            else if(str[i-1] == str[j-1] && i!=j){
		                matrix[i][j] = 1 + matrix[i-1][j-1];
		            }
		            else{
		                matrix[i][j] = max(matrix[i-1][j], matrix[i][j-1]);
		            }
		        }
		    }
		    return matrix[n][n];
		}

};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  