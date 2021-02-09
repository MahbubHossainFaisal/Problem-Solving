#include <bits/stdc++.h>
using namespace std;



int countStaireCase(int n,int m){
    int mod = ((int) pow(10,9))+7;
    int *output = new int[n];

    output[0]=1;
    output[1]=1;

    for(int i=2;i<n;i++){
        output[i]=0;
        for(int j=1; j<=m && j<=i;j++){
            output[i]=(output[i]+output[i-j])%mod;
        }
    }
    int ans =output[n-1];
    delete[] output;
    return ans;

}

int main()
{
   int n;
   cin>>n;
   cout<<countStaireCase(n+1,2)<<endl;
   return 0;

}