#include <bits/stdc++.h>
using namespace std;

int findFirstIndexArray(int arr[],int n,int key){
    if(n==0) return -1;

    int smallerArray = findFirstIndexArray(arr+1,n-1,key);
    if(arr[0] == key) return 0;
    
    return  1+smallerArray;
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

  int res = findFirstIndexArray(arr,n,key);
  
  cout<<res<<endl;
  return 0;
}