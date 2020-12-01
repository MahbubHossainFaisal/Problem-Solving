#include <bits/stdc++.h>
using namespace std;

int fib(int n,int arr[])
{

    if(n==0) return 0;
      if(n==1)  return 1;

    if(arr[n]!=0){
        return arr[n];
    }
     int result = fib(n-1,arr) + fib(n-2,arr);
    arr[n]=result;
    return result;

}

int fibiteration(int n)
{
    int *a =new int[n+1];
    a[0]=1;
    a[1]=1;

    for(int i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    int output = a[n-1];
    delete[] a;
    return output;
}

int main()
{
    int n;
    cin>>n;

    int arr[n+1]={0};


    cout<<fib(n,arr);

   //cout<<fibiteration(n);
}
