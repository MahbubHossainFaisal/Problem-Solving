#include<iostream>
using namespace std;

int main()
{
    int n,m,i,x;
    cin>>n;
    cin>>m;
    int *arr=new int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
          x=i;
        }
        else
            continue;
    }

    cout<<x+1;

}
