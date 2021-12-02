#include <bits/stdc++.h>
using namespace std;


int countDigit(int num){
    if(num == 0) return 0;
    int smallerAns = countDigit(num/10);
    return 1+smallerAns;
}

int main()
{
    int n;
    cin>>n;

   int res = countDigit(n);
   cout<<res;
    

}