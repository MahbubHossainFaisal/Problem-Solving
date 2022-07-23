#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int *arr,int n){
   for(int i=0; i<n-1; i++){
      
      int index = i;
      for(int j=i+1; j<n; j++){
        // cout<<"arr: "<<arr[j]<<endl;
         if(arr[j] < arr[index]){
            
            index = j;
         }
      }
      swap(arr[i],arr[index]);
   }
}

int main(){
   int n;
   cin>>n;
   int *arr = new int[n];

   for(int i=0; i<n; i++){
      cin>>arr[i];
   }
   SelectionSort(arr,n);

   for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
   }
   return 0;
   
}