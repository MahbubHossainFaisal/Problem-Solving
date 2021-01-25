
#include <bits/stdc++.h>
using namespace std;

using ll= unsigned long long int;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll i=3;
        ll j=n/2;
        if(n==2 || n==4)
        {
            cout<<"NO"<<endl;
        }
        else if(n==3 || n==5)
        {
            cout<<"YES"<<endl;
        }
        else if(n>5)
        {
            for(i;i<=j;i+=2)
            {
                if(n%i==0)
                {
                    cout<<"YES"<<endl;
                }
            }
            if(i>=j)
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
