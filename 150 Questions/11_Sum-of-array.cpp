#include <bits/stdc++.h>
using namespace std;

int sumArray(int arr[],int n){
    //base case
    if(n==0) return 0;
    
    int smallerArray = sumArray(arr+1,n-1);

    return arr[0]+smallerArray;
}


int main()
{
    
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

  int res = sumArray(arr,n);
  cout<<res<<endl;
  return 0;
}