#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,c;
  cin>>n>>c;

  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int diff=0;
  for(int i=0; i<n-1; i++){
    if(arr[i]-arr[i+1] > 0 && arr[i]-arr[i+1] > diff){
      diff= arr[i]- arr[i+1];
    }
  }

  int profit = diff-c;
  if(profit> 0){
    cout<<profit;
  }
  else{
    cout<<0;
  }
  
  
}
