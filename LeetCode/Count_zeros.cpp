#include <bits/stdc++.h>
using namespace std;


int countZeros(int n){
    if(n == 0) return 0;
    int smallerInput = n/10;
    int remainder = n%10;
    int cnt = countZeros(smallerInput);
    if(remainder == 0){
       // cout<<cnt<<endl;
       cnt = 1+cnt;
    }
    return cnt;
    
}

int main()
{
    int n;
    cin>>n;

   int res = countZeros(n);
   cout<<res;
    

}