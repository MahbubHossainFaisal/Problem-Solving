#include <bits/stdc++.h>
using namespace std;

int kadanes(int *arr,int n)
{
    int sum=0,best_sum=0;

    for(int i=0;i<n;i++)
    {
        sum+= arr[i];
        if(best_sum< sum){
            best_sum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return best_sum;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n,k;
    cin>>n>>k;


    int *arr = new int[n];
    int *arr2 = new int[n*k];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    for(int j=0; j<n*k; j++)
    {
        arr2[j]=arr[i++];
        if(i==n){
            i=0;
        }
    }
    cout<<kadanes(arr2,n*k)<<endl;
   }
   return 0;
}

