#include<iostream>
using namespace std;
int main()
{
    int x,y,z,i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {


        if(n>=20)
    {
        break;
    }
      cin>>x>>y>>z;
        if(x>y && x<z)
        {
            cout<<"Case"<<" "<<i<<":"<<x<<endl;
        }
        if(x>z && x<y)
        {
            cout<<"Case"<<" "<<i<<":"<<x<<endl;
        }
        if(y>x && y<z)
        {
           cout<<"Case"<<" "<<i<<":"<<y<<endl;
        }
        if(y>z &&y<x)
        {
            cout<<"Case"<<" "<<i<<":"<<y<<endl;
        }
        if(z>x && z<y)
        {
            cout<<"Case"<<" "<<i<<":"<<z<<endl;
        }
        if(z>y && z<x)
        {
            cout<<"Case"<<" "<<i<<":"<<z<<endl;
        }
    }
}
