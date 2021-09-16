#include <bits/stdc++.h>
using namespace std;



int main()
{

  int n;
  cin>>n;
  int tree[n];
  for(int i=0; i<n; i++ ){
    cin>>tree[i];
  }

  int ans=n+n-1;
  ans+=tree[0];

  for(int i=0; i<n-1; i++){
    ans += abs(tree[i+1] - tree[i]);
  }

  cout<<ans;
  return 0;
}
