#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll kadanes(int *arr,int n)
{
    ll sum=0,best_sum=0;

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

ll maxSubArray(int arr[],int n,int k)
{
    ll kadanes_sum = kadanes(arr,n);

    if(k==1){
        return kadanes_sum;
    }

    ll curr_prefix_sum =0, curr_suffix_sum=0;
    ll max_prefix_sum=INT_MIN, max_suffix_sum = INT_MIN;

    for(int i=0;i<n;i++)
    {
        curr_prefix_sum+=arr[i];
        max_prefix_sum=max(curr_prefix_sum,max_prefix_sum);
    }
    ll total_sum= curr_prefix_sum;

    for(int i=n-1;i>=0;i--)
    {
        curr_suffix_sum+=arr[i];
        max_suffix_sum=max(max_suffix_sum,curr_suffix_sum);
    }
    ll ans;
    if(total_sum<0)
    {
        ans = max(max_prefix_sum+max_suffix_sum,kadanes_sum);
    } else {
        ans = max(max_prefix_sum+max_suffix_sum+(total_sum*(k-2)),kadanes_sum);
    }

    return ans;


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


    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<maxSubArray(arr,n,k)<<endl;

}
    return 0;
}

