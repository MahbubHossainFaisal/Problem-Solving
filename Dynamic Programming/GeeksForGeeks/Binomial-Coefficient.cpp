#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int nCr(int n,int r){

  if(n<r) return 0;

  if((n-r) > r) r = n-r;
  int arr[r+1];
  memset(arr,0,sizeof(arr));
  arr[0]=1;
  int mod = 1000000007;

  for(int i=1;i<=n;i++){
    for(int j=min(i,r); j>0 ; j--){
      arr[j] = (arr[j]+arr[j-1])%mod;
    }
  }
  return arr[r];

}

int main()
{
 
  int n,r;
  cin>>n>>r;

  cout<<nCr(n,r);
}

