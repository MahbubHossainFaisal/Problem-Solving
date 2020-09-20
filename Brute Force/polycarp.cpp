#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    int *a=new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count,check,sum;
    count=0; check=0;
    sum=1;
    for(int i=0;i<n;i++)
    {
        if(sum==a[i])
        {   count++;
        }
        if(count>check)
        {
            check=count;

        }
        if(sum!=a[i])
        {
            count=0;
        }
    }
    int count2=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==1)
        {
            count2++;
        }
        if(a[i]==0)
        {
            break;
        }
    }
   int i=0;
while(a[i]!=0)
{
    count2=count2+a[i++];

}
    if(count2>check)
    {
        cout<<count2;
    }
    else
        cout<<check;
}
