/*
Suppose array is : 1,2,-1,4,-2,3,-4,-4,1,2

we have to find the largest sum subarray from it with optimized approach.
To find that , we need kadane's algorithm

The algorithm works like this:


int max_sum=INT_MIN
int curr_sum=0

take 1
curr_sum = 1
if( curr_sum> max_sum) make max_sum = curr_sum
so max_sum = 1
take 2
curr_sum = 1+2 =3
so, max_sum =3

take -1
curr_sum = 3-1 =2
max_sum=3

take 4
curr_sum=2+4=6
so,max_sum=6

take -2
curr_sum=6-2=4
max_sum=6

take 3
curr_sum = 4+3 = 7
so,max_sum=7

take -4
curr_sum = 7-4=3
max_sum = 7

take -4
curr_sum = 3-4=-1
if(curr_sum<0) make curr_sum =0
curr_sum = 0
max_sum=7

take 1
curr_sum=0+1=1
max_sum=7

take 2
curr_sum = 1+2=3
max_sum = 7

Array element has finished.

So, using kadane's algorithm largest sum subarray will be 7.







*/





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
