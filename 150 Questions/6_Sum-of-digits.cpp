#include <bits/stdc++.h>
using namespace std;


int sumOfDigit(int n){
   if(n == 0) return 0;
   int smallerInput = n/10;
   int remainder = n%10;
   int ans = sumOfDigit(smallerInput);
   return ans+remainder;
}

int main()
{
    int n;
    cin>>n;

   int res = sumOfDigit(n);
   cout<<res;
    

}