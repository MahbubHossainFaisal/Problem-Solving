#include <bits/stdc++.h>
using namespace std;

int countOccurranceArray(int arr[],int n,int key){
    if(n==0) {
        return 0;
    };
    int smallerArray = countOccurranceArray(arr,n-1,key);
    if(arr[n-1] == key) return 1+smallerArray;
    
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

   int res = countOccurranceArray(arr,n,key);
   cout<<res<<endl;
  return 0;
}