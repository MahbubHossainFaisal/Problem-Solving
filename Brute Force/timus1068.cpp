#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int count=0;
    if(t<0)
    {
        for(int i=1;i>=t;i--)
        {
            count=count-1;
        }
    }
    else

    {

     for(int i=1;i<=t;i++)
    {
        count=count+i;
    }}
    cout<<count;
}
