
/*
Problem: https://codeforces.com/problemset/problem/266/A
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char *arr=new char[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    char check=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]==check){
            arr[i]='0';
        }
        else{
            check=arr[i];
        }

    }
    int cnt=0;
     for(int i=0;i<n;i++)
    {
        if(arr[i]=='0'){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
