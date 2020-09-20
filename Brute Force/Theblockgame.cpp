#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {  int x,i,n;
    cin>>n;
    int a[4];
    for(i=0;i<4;i++)
    {
        x=n%10;
        a[i]=x;
        n=n/10;
        if(n==0)
        {
            break;
        }
    }

    cout<<a[4];

    }


}
