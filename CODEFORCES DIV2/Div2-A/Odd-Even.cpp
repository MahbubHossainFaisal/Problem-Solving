#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main()
{
   ll n,k,ans;
   cin>>n>>k;

   if(n%2 == 0){
      ans = n/2;
   }
   else{
      ans = (n+1)/2;
   }

   if(k <= ans){
      cout<<(k*2)-1;
   }
   else{
      cout<<(k-ans)*2;
   }
   return 0;

}