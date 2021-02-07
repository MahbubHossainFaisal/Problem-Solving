#include <bits/stdc++.h>
using namespace std;

using ll= long long int;
unordered_map<ll,ll> mp;

ll countBT(int h){
    if(h<=1){
        return 1;
    }
    if(mp.count(h)){
        return mp[h];
    }

    ll mod = (ll) (pow(10,9))+7;
    ll x = countBT(h-1);
    ll y = countBT(h-2);

    ll tempx = (x*x) % mod;
    ll tempy = (2*x*y) % mod;

    ll ans = (tempx+tempy)% mod;
    mp[h]=ans;
    return ans; 
}

int main()
{
    int height;
    cin>>height;
    
    cout<<countBT(height);

}