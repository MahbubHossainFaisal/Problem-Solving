#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    int *a=new int[n*3];
        for(int i=0;i<n*3;i++)
        {
            cin>>a[i];
        }
       int x=0;
       int y=0;
       int z=0;
        for(int i=0;i<n*3;i+=3)
        {
            x=x+a[i];
        }
        for(int i=1;i<n*3;i+=3)
        {
            y=y+a[i];
        }
        for(int i=2;i<n*3;i+=3)
        {
            z=z+a[i];
        }
 
        if(x==0 && y==0 && z==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }