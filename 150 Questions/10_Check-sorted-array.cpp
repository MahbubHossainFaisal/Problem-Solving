#include <bits/stdc++.h>
using namespace std;

bool isSortedArray(int arr[],int n){
    //base case
    if(n==0 or n==1) return true;
    if(arr[0] > arr[1]) return false;
    //hypothesis
    bool smallerInput = isSortedArray(arr+1,n-1);

    return smallerInput;
}


int main()
{
    
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

  bool res=  isSortedArray(arr,n);
  if(res) cout<<"Array is sorted!";
  else cout<<"Array is not sorted!";
  return 0;
}