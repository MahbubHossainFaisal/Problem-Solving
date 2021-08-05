
#include<bits/stdc++.h>
using namespace std;



class Solution
{
    public:
    
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
       
        int matrix[m+1][n+1];
        int i,j;
        for(i=0;i<=m;i++){
            for(j=0;j<=n;j++){
                if(i==0 or j==0){
                    matrix[i][j] = 0;
                }
                else if(X[i-1] == Y[j-1]){
                    matrix[i][j] = 1 + matrix[i-1][j-1];
                }
                else{
                    matrix[i][j] = max(matrix[i-1][j],matrix[i][j-1]);
                }
            }
        }
        int LCS = matrix[m][n];
        int totalLength = X.size()+Y.size();
        int SCS = totalLength - LCS;
        
        return SCS;
    }
};



int main()
{   
    
    int t;

    cin >> t;
    while(t--){
    string X, Y;
	cin >> X >> Y;
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}

