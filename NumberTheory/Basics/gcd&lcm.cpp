#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    int rem;

    if(a<b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;



    }
    return a;

}

int lcm(int a,int b)
{
    int g=gcd(a,b);

    int res=((a*b)/g);
    return res;
}


int main()
{
    int a,b,c,d;
    cin>>a>>b;
    c=gcd(a,b);
    d=lcm(a,b);
    cout<<"GCD of these two number is :"<<c<<endl;
     cout<<"LCM of these two number is :"<<d<<endl;

}
