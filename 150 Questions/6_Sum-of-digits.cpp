#include <bits/stdc++.h>
using namespace std;


int sumOfDigit(int n){
    if(n==0) return 0;
    int smallerInput = sumOfDigit(n/10);
    int remainder = n%10;
    return remainder+smallerInput;
}

int main()
{
    int n;
    cin>>n;

   int res = sumOfDigit(n);
   cout<<res;
    

}