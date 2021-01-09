#include <bits/stdc++.h>
using namespace std;

int firstIndex(int *arr,int n,int i,int x)
{
    if(i==n)
    {
        return -1;
    }
    else if(arr[i]==x)
    {
        return i;
    }
    else {
        return firstIndex(arr,i+1,n,x);
    }
}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter a value to search: "<<endl;
    int x;
    cin>>x;
    int i=0;
    cout<<firstIndex(arr,n,i,x);

}
