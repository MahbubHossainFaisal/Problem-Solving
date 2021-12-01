#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    //base case
    
    if(n==0) return 1;
    if(n<1) return -1;
    //assumption
    int smallerAns = factorial(n-1);

    //calculation 
    int ans = n*smallerAns;
    return ans;
}

int main()
{

    int n;
    cin>>n;
   int ans = factorial(n);
   cout<<"Factorial of "<<n<<" is: "<<ans<<endl;
   return 0;

}