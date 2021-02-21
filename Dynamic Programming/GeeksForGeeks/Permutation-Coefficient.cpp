
#include <bits/stdc++.h>
using namespace std;

unsigned long long int nPr(int n,int r){
  if(n<r) return 0;
  unsigned long long int res=1;
  for(int i=1;i<=n;i++){
  if(n==r){
    break;
  }
    res=res*n;
    n=n-1;
  }
return res;
}

int main()
{
 
  int n,r;
  cin>>n>>r;

  cout<<nPr(n,r);
}

