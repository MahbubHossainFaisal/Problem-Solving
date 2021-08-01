
#include <bits/stdc++.h>
using namespace std;

class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    int matrix[M+1][V+1];
	     for(int i=0; i<=M; i++){
	        matrix[i][0] = 0;
	    }
	    for(int j=0;j<=V;j++){
	        matrix[0][j] = INT_MAX - 1;
	    }
	   
	    
	 
	    
	    for(int i=1; i<=M; i++){
	        for(int j=1; j<=V; j++){
	            if(coins[i-1] <= j){
	                matrix[i][j] = min(matrix[i][j-coins[i-1]]+1, matrix[i-1][j]);
	            }
	            else{
	                matrix[i][j] = matrix[i-1][j];
	            }
	        }
	    }
	    if(matrix[M][V] == INT_MAX-1) return -1;
	    
	    return matrix[M][V];
	} 
	  
};


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  