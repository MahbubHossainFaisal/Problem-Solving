#include<iostream>
using namespace std;
int main()
{
    int a,b,n,x,i,j,count;
    count=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {


    cin>>a>>b;
    for(j=a;j<=b;j++)
    {   if(a%2==0)
        {count=count+a+1;
        a=a+2;
        if(a>=b)
        {
            break;
        }}
        if(a%2!=0)
        {
             count=count+a;
        a=a+2;
        if(a>b)
        {
            break;
        }}

    }
   cout<<"Case "<<i<<": "<<count<<endl;
        count=0;


    }
}



