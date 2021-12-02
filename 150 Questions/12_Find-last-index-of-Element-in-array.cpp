#include <bits/stdc++.h>
using namespace std;

int findLastIndexArray(int arr[],int n,int key){
    if(n==0) return -1;

    int smallerArray = findFirstIndexArray(arr,n-1,key);
    if(arr[n-1] == key) return n-1;
    
    return smallerArray;
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

  int res = findLastIndexArray(arr,n,key);
  cout<<res<<endl;
  return 0;
}