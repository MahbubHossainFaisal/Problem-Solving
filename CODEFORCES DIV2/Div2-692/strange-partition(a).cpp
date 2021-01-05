
/*
    Link: https://codeforces.com/contest/1471/problem/A
*/
#include <bits/stdc++.h>
using namespace std;

int findBeauty(int arr[],int n,float x)
{
    float res=0;
    for(int i=0;i<n;i++)
    {
        float add=ceil(float(arr[i]/x));
        //cout<<add<<endl;
        res=res+add;
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;

        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
       float beauty1 = findBeauty(arr,n,x);

       float cnt=0;

       for(int i=0;i<n;i++)
       {
          cnt=cnt+arr[i];
       }
       float beauty2=ceil(cnt/x);

       if(beauty1>beauty2){
        cout<<beauty2<<" "<<beauty1<<endl;
       } else {
        cout<<beauty1<<" "<<beauty2<<endl;
       }



    }
    return 0;
}
