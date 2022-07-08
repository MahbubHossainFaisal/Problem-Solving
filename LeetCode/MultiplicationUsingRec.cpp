#include <bits/stdc++.h>
using namespace std;


int multiplication(int n,int m){
    if(m==0) return 0;
    int ans = multiplication(n,m-1);
    return ans += n;
}

int main()
{
    int n,m;
    cin>>n>>m;

   int res = multiplication(n,m);
   cout<<res;
    

}