#include <bits/stdc++.h>
using namespace std;

unordered_map<int,int> mp;

int cutRibon(int n,int a,int b, int c){
  if(n==0) return 0;
  if(n<0) return INT_MIN;
  if(mp.count(n)) return mp[n];
  return mp[n]=1+max(cutRibon(n-a,a,b,c),max(cutRibon(n-b,a,b,c),cutRibon(n-c,a,b,c)));

}


int main() {

int n,a,b,c;

cin>>n>>a>>b>>c;

cout<<cutRibon(n,a,b,c);
return 0;

}
