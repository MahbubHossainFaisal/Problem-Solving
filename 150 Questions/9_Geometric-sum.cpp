#include <bits/stdc++.h>
using namespace std;

double gSum(int k){
    if(k == 0) return 1;

    double smallerInput = gSum(k-1);

    return smallerInput+(1.0/pow(2,k));
}


int main()
{
    int n;
    cin>>n;
    int cnt =0;
    double res = gSum(n);
   
    cout<<res;
   return 0;
}