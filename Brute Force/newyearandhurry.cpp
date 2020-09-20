#include<iostream>
using namespace std;

int main()
{
    int n,k,x;
    cin>>n;
    cin>>k;

    int *a=new int[n];
    for(int i=1;i<=n;i++)
    {
        a[i]=5*i;
    }
    x=240-k;
    int sum=0;
    int count=0;
int    i=1;
    while(sum<x)
    {   if(i>n)
    {
        break;
    }
        sum=sum+a[i++];

        if(sum>x)
        {
            break;
        }
        count++;
    }

    cout<<count;

}
