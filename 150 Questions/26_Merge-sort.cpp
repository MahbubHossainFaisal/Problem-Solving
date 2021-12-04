#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int mid, int e, int n){
    int *brr = new int[n];
    //i is for traversing first half array
    //j is for traversing second half array
    //k is for inserting values in the new created array brr
    int i=s,j=mid+1,k=s;

    while(i<=mid && j<=e){
        if(arr[i] <= arr[j]){
            brr[k++] = arr[i++];
        } else{
            brr[k++] = arr[j++];
        }
    }
    for(; i<=mid; i++){
        brr[k++] = arr[i];
    }
    for(; j<=e; j++){
        brr[k++] = arr[j];
    }
    // from s to e they elements will be copied from brr to arr
    for(int l=s; l<=e; l++){
        arr[l] = brr[l];
    }

}
void mergeSort(int arr[], int s,int e,int n){
    if(s >= e) return;

    int mid;
    if(s<e){
        mid = (s+e)/2;
        mergeSort(arr,s,mid,n);
        mergeSort(arr,mid+1,e,n);
        merge(arr,s,mid,e,n);
    }
}

int main()
{
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    mergeSort(arr,0,n-1,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

  return 0;


}