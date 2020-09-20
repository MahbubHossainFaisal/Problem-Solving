#include<iostream>
using namespace std;

void merge(int *a,int s,int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[1000];

    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }

    while(i<=mid)
    {
        temp[k++]=a[i++];
    }

    while(j<=e)
    {
        temp[k++]=a[j++];
    }

    for(int l=s; l<=e; l++)
    {
        a[l]=temp[l];
    }

}



void mergesort(int a[],int s,int e)
{
    if(s>=e)
    {
        return;
    }

    int mid=(s+e)/2;

    mergesort(a,s,mid);
    mergesort(a,mid+1,e);

    merge(a,s,e);
}



int main()
{
    int a[1000];
    int n;
    cout<<"Give an array size under 1000"<<endl;
    cin>>n;
    cout<<"please enter the unorder data"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);

      for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" , ";
    }

}
