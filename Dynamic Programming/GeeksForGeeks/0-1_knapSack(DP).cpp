#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;



int knapSack(int W, int wt[], int val[], int n,int **dp) 
{ 
    if(n==0 || W == 0){
    return 0;
   }

   if(dp[n][W] > -1 ){
    return dp[n][W];
   }

   if(wt[n-1] <= W){
     return dp[n][W] = max(val[n-1] + knapSack(W-wt[n-1],wt,val,n-1,dp),knapSack(W,wt,val,n-1,dp));
     }

  if(wt[n-1] > W) {
     
     return dp[n][W] =   knapSack(W,wt,val,n-1,dp);
      
    }
  
}

int main()
{
  int n,w;
  cin>>n>>w;
  int *wt = new int[n];
  int *val = new int[n];

  for(int i=0 ; i < n ; i++){
    cin>> wt[i];
  }
  for(int i=0 ; i < n ; i++){
    cin>> val[i];
  }
  int **dp = new int* [n+1];
    int i,j;

  for(i=0; i<=n;i++){
      dp[i] = new int[w+1];
    for(j=0; j<=w; j++){
     dp[i][j] = -1;
    }
  }
  cout<<knapSack(w,wt,val,n,dp)<<endl;
  return 0;
}