#include<bits/stdc++.h>
using namespace std;

int main()
{
int test;
cin>>test;
int a=1;
while(test--)
{


    long long i,n, k,Count1=1,Count2=1,l,Count3=1;


    cin>>n>>k;


    for(i=1;i<=n;i++)
    {

        Count1=((Count1%1000003)*(i%1000003))%1000003;
        //Count1=Count1%1000003;
    }
    Count1=Count1%1000003;
    if(k==0)
    {
        k=1;
    }
    for(i=1;i<=k;i++)
    {



        Count2=((Count2%1000003)*(i%1000003))%1000003;
        //Count2=Count2%1000003;
    }
    Count2=Count2%1000003;
    l=n-k;
        if(l==0)
    {
        l=1;
    }
    for(i=1;i<=l;i++)
    {

        Count3=((Count3%1000003)*(i%1000003))%1000003;
        //Count3=Count3%1000003;
    }
    Count3=Count3%1000003;
    long x;
    x=((Count1)/((Count2)*(Count3)))%1000003;
    cout<<"Case "<<a<<":"<<" "<<x<<endl;
    a++;
}
}
