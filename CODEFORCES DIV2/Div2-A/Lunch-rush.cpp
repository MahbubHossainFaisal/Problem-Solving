#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main()
{
  ll n,k;
  cin>>n>>k;

  ll f[n];
  ll t[n];
  for(ll i=0; i<n; i++){
    cin>>f[i]>>t[i];
  }

  ll res[n];
  for(ll i=0; i<n; i++){
    if(t[i] > k){
      res[i]= f[i]-(t[i]-k);
    }
    else{
      res[i]= f[i];
    }
  }

  int mx = *max_element(res,res+n);
  cout<<mx;
}
