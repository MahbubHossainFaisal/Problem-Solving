#include <bits/stdc++.h>
using namespace std;

int staireCase(int n){
    if(n==0 or n==1) return 1;
    if(n<0) return 0;

    return staireCase(n-1)+staireCase(n-2)+staireCase(n-3);
}

int main()
{
  int n;
  cin>>n;
  int res = staireCase(n);
  cout<<res<<endl;

  return 0;


}