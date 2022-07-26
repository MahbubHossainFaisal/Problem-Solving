#include <bits/stdc++.h>

using namespace std;

// Optimized bubble sort 
/*
So, what we can optimize in a bubble sort is we can check if the array is already sorted or not
if already sorted then we don't need to check that again
another thing is that , bubble sort starts being sorted from right side. So everytime we will sort an 
element we will reduce the number of check from the right side
*/

void optimizedBubbleSort(int arr[], int n){
    int i,j,flag;
    for(i=0; i<n; i++){
        flag = 0;
        for(j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = 1;
            }
        }
        
        if(flag == 0){
            break;
        }
        
    }
}

int main()
{   int n;
    cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    optimizedBubbleSort(arr,n);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
