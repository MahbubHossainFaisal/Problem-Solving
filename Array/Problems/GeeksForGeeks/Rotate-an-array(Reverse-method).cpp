#include <bits/stdc++.h>
using namespace std;

void reverseArray(int *arr,int start,int end){
  while(start < end){
    int temp = arr[start];
    arr[start++] = arr[end];
    arr[end--] = temp;
  }
}

void rotateArray(int *arr,int n, int k){
  if(n==0 or n==1) return;

  reverseArray(arr,0,n-k-1);
  reverseArray(arr,n-k,n-1);
  reverseArray(arr,0,n-1);
}



int main() {

  int n;
  cin>>n;

  int arr[n];

  for(int i=0; i<n; i++){
    cin>>arr[i];

  }

  int k;
  cin>>k;

  rotateArray(arr,n,k);
  
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";

  }

return 0;
}
