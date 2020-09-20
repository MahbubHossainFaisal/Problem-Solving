#include<iostream>
using namespace std;

int main()
{
    int x, n,m,a,cut1,cut2,count1=0,count2=0;
    cin>>n;
    cin>>m;
    cin>>a;
     x=m;
    if(n==1 && m==1 && a==1)
    {
        cout<<"1";
    }
    else
    {



    while(n>0)
    {
      cut1=n-a;
     if(a>=m)
     {
         m=m-a;
         count1++;
         if(m<=0)
         {
             m=x;
         }
     }
      n=n-a;
      count1++;
    }

    cout<<count1;}

}
