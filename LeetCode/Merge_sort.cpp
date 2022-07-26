#include <bits/stdc++.h>
using namespace std;

void mergeArray(int arr[],int s,int mid, int e){
    int brr[100];
    
    int i=s;
    int j=mid+1;
    int k = s;
    
    while(i<=mid && j<=e){
        if(arr[i] < arr[j]){
            brr[k++] = arr[i++];
        }
        else{
            brr[k++] = arr[j++];
        }
    }
    
    while(i<=mid) {
        brr[k++] = arr[i++];
    }
    while(j<=e){
        brr[k++] = arr[j++];
    }
    
    for(i=s;i<=e; i++){
        arr[i] = brr[i];
    }
}

void mergeSort(int arr[], int s,int e){
    if(s>= e) // means if array length is 0 or 1
    return;
    
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    mergeArray(arr,s,mid,e);
}

int main()
{
    int arr [] = {10,7,5,6,2,1,3,8,9};
    
    mergeSort(arr,0,8);
    
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
