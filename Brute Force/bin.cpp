#include<iostream>
using namespace std;
#include<algorithm>

int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int q;
    cin>>q;
    int *b=new int[q];
    for(int j=0;j<q;j++)
    {
        cin>>b[j];
    }
    int x=0;

    for(int k=0;k<q;k++)
    {
         int left,right,mid;
    left=0;
    right=n-1;


    while(left<=right)

    {
        mid=(left+right)/2;

        if(a[mid]<b[x])
        {
            left=mid+1;
        }
        else if(a[mid]>b[x])
        {
            right=mid-1;
        }
        else
        {
            cout<<mid+1<<endl;
            x++;
        }

    }


    }



}
