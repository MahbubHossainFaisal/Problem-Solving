#include <bits/stdc++.h>
using namespace std;

using ll= unsigned long long int;
unordered_map<ll,ll> mp;

ll balanceBTs(int height){
    if(height<=1){
        return 1;
    }
    if(mp.count(height)){
        return mp[height];
    }
    ll x = balanceBTs(height-1);
    ll y = balanceBTs(height-2);

   ll ans= (x*x)+(2*x*y);
    mp[height]=ans;
    return ans;
}

int main()
{
    int height;
    cin>>height;
    
    cout<<balanceBTs(height);

}