#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int n,int x){
    int start=0;
    int end= n-1;

    while(start<=end){
        int mid = start+(end-start)/2;

        if(arr[mid]==x){
            
           return x;
        }
        else if(arr[mid]<x){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    int pos1 = abs(start-x);
    int pos2 = abs(end-x);
    if(pos1<pos2){
        return pos1;
    }
    else{
        return pos2;
    }
}


int main()
{
    int arr[10] ={1,2,3,4,5,6,7,8,10};
   int ans= BinarySearch(arr,9,6);
   cout<<ans;
   return 0;
}