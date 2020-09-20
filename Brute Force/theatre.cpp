#include<iostream>
#include<cmath>
using namespace std;
int main()
{int p,q,result,n,m,a;
    cin>>n;
    cin>>m;
    cin>>a;

    float x=n/a;
    float y=m/a;

    p=ceil(x);
    q=ceil(y);

    result=p*q;
    cout<<result;



}
