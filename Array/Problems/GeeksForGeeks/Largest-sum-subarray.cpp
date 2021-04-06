
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
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<kadanes(arr,n);
}
