#include<iostream>
using namespace std;

int main()
{
    int n,k,count=0;
    cin>>n;
    cin>>k;
    int *a=new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
       if(a[i]>=a[k-1])
        {
            count++;
            if(a[i]<a[k-1])
            {
                break;
            }
            if(a[i]==0)
            {
                count--;
            }

        }

    }
    cout<<count;

}
