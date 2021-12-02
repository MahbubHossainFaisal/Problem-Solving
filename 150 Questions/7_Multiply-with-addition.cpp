#include <bits/stdc++.h>
using namespace std;


int multiplyWithAddition(int n,int m){
    if(m==0) return 0;
   int smallerInput = multiplyWithAddition(n,m-1);
    return n+smallerInput;
}

int main()
{
    int n,m;
    cin>>n>>m;

   int res = multiplyWithAddition(n,m);
   cout<<res;
    
   return 0;
}