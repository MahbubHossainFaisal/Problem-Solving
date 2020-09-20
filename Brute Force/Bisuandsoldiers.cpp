#include<iostream>
using namespace std;
#include <algorithm>

int main()
{
    int n,q;
    cin>>n;

    int *sp=new int[n];
    int *bp=new int[q];

    for(int i=0;i<n;i++)
    {
        cin>>sp[i];
    }
    cin>>q;

    for(int i=0;i<q;i++)
    {
        cin>>bp[i];
    }

    sort(sp,sp+n);

for (int j=0;j<q;j++)
{


int left=0;
int right=n-1;
int count=0;
int mid=0;

while(bp[j]<=sp[right])
{
int    mid=(left+right)/2;
    if(bp[j]>sp[mid])
    {
        mid++;
    }
    else if(bp[j]>=sp[mid] && bp[j]<sp[mid+1])
    {
        int count=mid;
        break;
    }
    else if(bp[j]<sp[mid])
    {
        right=mid-1;
    }
}

int sum=0;

for( int j=0;j<count+1;j++)
{
    sum=sum+sp[j];
}

cout<<count+1<<" "<<sum<<endl;
}}


