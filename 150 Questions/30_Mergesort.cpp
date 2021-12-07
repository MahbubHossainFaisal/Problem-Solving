#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start,int mid, int end,int sz){
    int *brr = new int[sz];
    int i=start;
    int j=mid+1;
    int k= start;

    while(i<= mid && j<=end){
        if(arr[i] > arr[j]){
            brr[k++] = arr[j++];
        } else{
            brr[k++] = arr[i++];
        }
    }

    for(;i<=mid; i++){
        brr[k++] = arr[i];
    }
    for(; j<=end; j++){
        brr[k++] = arr[j];
    }

    for(int i=start; i<=end; i++){
        arr[i] = brr[i];
    }
}

void mergeSort(int arr[], int start, int end, int sz){
    if(start >= end) return;

    int mid;
    if(start < end){
        mid = (start+end)/2;
        mergeSort(arr,start,mid,sz);
        mergeSort(arr,mid+1,end,sz);
        merge(arr,start,mid,end,sz);
    }
}


int main(){
    int arr[]={8,5,2,1,7,3,4};
    int n = 7;

    mergeSort(arr,0,n-1,n);

    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
}
