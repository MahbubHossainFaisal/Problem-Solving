#include <bits/stdc++.h>
using namespace std;

void findAllIndexArray(int arr[],int n,int key){
    if(n==0) {
        return;
    };
    findAllIndexArray(arr,n-1,key);
    if(arr[n-1] == key) cout<<"found at index : "<<n-1<<endl;
    
    return;
}

int main()
{
    
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

   findAllIndexArray(arr,n,key);
  return 0;
}