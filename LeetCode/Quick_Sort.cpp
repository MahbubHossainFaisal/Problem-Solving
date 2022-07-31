#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e){
    int pivotEle = arr[e];
    int i=s;
    int j=s;

    for(i=s;i<=e; i++){
      if(arr[i] < pivotEle){
         swap(arr[i],arr[j]);
         j++;
      }
    }
    swap(arr[j],arr[e]);
    return j;
}

void quicksort(int arr[], int s, int e){
   if(s>=e){ // means array is empty or 1 in size so it is sorted
      return;
   }
   int p = partition(arr,s,e);
   quicksort(arr,s,p-1);
   quicksort(arr,p+1,e);

}

int main()
{
   int n;
   cin>>n;
   int *arr= new int[n];

   for(int i=0; i<n; i++){
      cin>>arr[i];
   }

   

   quicksort(arr,0,n-1);

   for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
   }

}