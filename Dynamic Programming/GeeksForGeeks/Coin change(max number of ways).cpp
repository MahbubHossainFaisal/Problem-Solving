// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
       
     long long   int row = m;
      long long  int col = n;
        
       long long int matrix[row+1][col+1];
       long long int i,j;
        
        for(i=0; i<=col; i++){
            matrix[0][i] = 0;
        }
        for( i=0; i<=row; i++){
            matrix[i][0] = 1;
        }
        
        for(i=1; i<=row; i++){
            for( j=1; j<=col; j++){
                if(S[i-1] <= j){
                    matrix[i][j] = matrix[i][j-S[i-1]] + matrix[i-1][j];
                }
                else{
                     matrix[i][j] =  matrix[i-1][j];
                }
            }
        }
        
        return matrix[row][col];
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[m];
		for(int i=0;i<m;i++)
		    cin>>arr[i];
	    Solution ob;
		cout<<ob.count(arr,m,n)<<endl;
	}
    
    
    return 0;
}  // } Driver Code Ends