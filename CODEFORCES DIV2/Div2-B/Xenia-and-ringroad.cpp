#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0; i<m;i++){
        cin>>arr[i];
    }
   long long int cnt=arr[0]-1;
   for(int i=0; i<m-1; i++){
    if(arr[i] > arr[i+1]){
        cnt = cnt+ (n-(arr[i]-arr[i+1]));
    }
    else {
        cnt = cnt + (arr[i+1]-arr[i]);
    }
   }

cout<<cnt<<endl;

}