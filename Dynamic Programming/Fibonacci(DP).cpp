#include <bits/stdc++.h>
using namespace std;


unsigned long long fibonacci(int n,unsigned long long *arr)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    if(arr[n]>0){
        return arr[n];
    }
    unsigned long long output = fibonacci(n-1,arr)+ fibonacci(n-2,arr);
    arr[n]= output;
    return output;

}
int main()
{
    int n;
    cin>>n;

  unsigned long long *arr=new unsigned long long int[n+1]{0};
    cout<<fibonacci(n,arr);
}
