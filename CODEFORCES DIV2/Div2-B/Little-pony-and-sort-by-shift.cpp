#include <bits/stdc++.h>
using namespace std;



int main()
{

  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  if(n==2){
    if(arr[0] > arr[1]){
      cout<<1;
    }
    else{
      cout<<0;
    }
    return 0;
  }

  bool flag=true;
  bool ans=true;
  int pos;
  for(int i=0; i<n-1; i++){
   if(flag){
     if(arr[i+1]<arr[i]){
      flag=false;
      pos=i;
    }
   }
   else{
    if(arr[i+1] < arr[i]){
      ans=false;
    }
   }
  }
  if(flag){
    if(arr[0] == arr[n-1]){
      flag=false;
      pos=n-1;
  }
  }

  if(arr[0] < arr[n-1]) ans=false;



  if(!flag && ans){
    int val= n-pos-1;
    cout<<val;
  }
  else{
    cout<<-1<<endl;
  }

}
