#include<iostream>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>m;

        if(m%n==0)
        cout<<"Yes"<<endl;

        else
        cout<<"No"<<endl;
    }

}
