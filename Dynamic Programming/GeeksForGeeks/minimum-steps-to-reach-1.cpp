#include <bits/stdc++.h>
using namespace std;


int min_step(int n,int *arr)
{
    if(n==1)
    {
        return 0;
    }
    if(arr[n]>0){
        return arr[n];
    }

    int result = min_step(n-1,arr);
    if(n%2==0){
        result=min(result,min_step(n/2,arr));
    }
    if(n%3==0){
        result=min(result,min_step(n/3,arr));
    }
    arr[n]=1+ result;
    return arr[n];
}
int main()
{
   int n;
   cin>>n;

   int *arr=new int[n+1]{0} ;

   cout<<min_step(n,arr);
}
