// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int matrix[n+1][W+1];
       
       for(int i=0;i<n+1;i++){
           for(int j=0; j<W+1; j++){
               if(i==0 or j==0){
                   matrix[i][j] = 0;
               }
               else   if(wt[i-1] <= j){
                   matrix[i][j] = max(val[i-1] + matrix[i-1][j-wt[i-1]], matrix[i-1][j]);
               }
               else{
                   matrix[i][j] = matrix[i-1][j];
               }
           }
       }
       
       
       return matrix[n][W];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
} 