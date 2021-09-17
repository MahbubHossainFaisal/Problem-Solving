#include <bits/stdc++.h>
using namespace std;



int main()
{
  int n;
  cin>>n;

  int arr[n+1];
  for(int i=1; i<=n; i++){
    cin>>arr[i];
  }

  int maxIndex,minIndex;
  int mx=INT_MIN;
  int mn = INT_MAX;

  for(int i=1; i<=n; i++){
    if(arr[i]> mx){
      mx= arr[i];
      maxIndex=i;
    }
   if(arr[i]<= mn){
      mn= arr[i];
      minIndex=i;
    }
  }



  // cout<<maxIndex<<endl;
  // cout<<minIndex<<endl;
  int first = maxIndex - 1;
  int second = n-minIndex;

  if(maxIndex>minIndex)cout<<first+second-1<<endl;
  else cout<<first+second<<endl;
}
