#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int large =-1;
    if(a+b+c > large) large = a+b+c;
    if((a+b)*c > large) large = (a+b)*c;
    if(a+(b*c) >large) large = a+(b*c);
    if((a*b)+c > large) large = (a*b)+c;
    if(a*(b+c) > large) large = a*(b+c);
    if(a*b*c > large) large = a*b*c;

    cout<<large;
}