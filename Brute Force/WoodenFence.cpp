#include<iostream>
using namespace std;

int main()
{
    int t,n,x,x1,y1,y,div;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;

        div=n/2;
        if(n%2!=0)
        {
            x1=div+1;
            y1=div;
        }
        else
        {
            x1=div;
            y1=div;
        }

        if(x>=x1 && y>=y1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
