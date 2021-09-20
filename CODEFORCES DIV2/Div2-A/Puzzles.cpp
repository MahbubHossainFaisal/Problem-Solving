#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }

    sort(arr,arr+m);
    int minAns = INT_MAX;

    int ans;

    for(int i=n; i<=m; i++){
        ans = abs(arr[i-n] - arr[i-1]);
        
       if(ans < minAns){
        minAns=ans;
       }
    }
    cout<<minAns;
    
    }