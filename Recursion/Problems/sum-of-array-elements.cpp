#include <bits/stdc++.h>
using namespace std;

int sum(int arr[],int sz)
{
    if(sz==1){
        return arr[sz-1];
    }
    int smallerInput = sum(arr+1,sz-1);
    return arr[0]+smallerInput;
}


int main()
{
    int arr[]={1,4,2,5,5};

    int res = sum(arr,5);
    cout<<res;
}
