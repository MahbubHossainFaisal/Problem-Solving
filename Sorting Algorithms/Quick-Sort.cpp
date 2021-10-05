#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int st,int ed){
  int pivot = arr[ed];
  int j=st;
  for(int i=st; i<ed; i++){
    if(arr[i]<pivot){
      swap(arr[i],arr[j]);
      j++;
    }
  }
  swap(arr[ed],arr[j]);
  return j;
}

void quickSort(int arr[], int st,int ed){
  int j;
  if(st<ed){
    j= partition(arr,st,ed);
    quickSort(arr,st,j-1);
    quickSort(arr,j+1,ed);
  }

}

int main() {

   int n;
   cin>>n;

   int arr[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   quickSort(arr,0,n-1);

   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
   return 0;

}
