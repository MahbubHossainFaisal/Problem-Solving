#include <bits/stdc++.h>
using namespace std;



int main()
{
  int n,m;
  cin>>n,m;

  int i=1;
  int cnt=0;

  for(;;){
    if(n-i == 0) break;
    if(m-i == 0) break;

    i++;
    cnt++;
  }
  if(cnt%2==0) cout<<"Akshat";
  else cout<<"Malvika";
  return 0;
}
