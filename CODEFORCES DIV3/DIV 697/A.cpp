
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

        if(n%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            while(n>=1)
            {

                if(n%2!=0 && n>1)
                {
                    cout<<"YES"<<endl;
                    break;
                }
                else if(n==1)
                {
                    cout<<"NO"<<endl;
                    break;
                }
                n=n/2;
            }
        }
    }
}
