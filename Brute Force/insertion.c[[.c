#include<iostream>
using namespace std;

void insertion_Sort(int a[],int n)
{
    int i,j,item;

    for(i=1;i<n-1;i++)
    {
        item=a[i];
        j=i-1;

        while(j>=0 && a[j]>item)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=item;



    }
}


int main()
{
    int a[100];

    int n;
    cin>>n;
    insertion_Sort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
}
