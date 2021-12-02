#include <bits/stdc++.h>
using namespace std;

int power(int x,int n){
    //base case
    if(n==0) return 1;

    //assumption/hypothesis
    int smallerInput = power(x,n-1);

    //calculation
    return x*smallerInput;

}

int main()
{

    int x,n;
    cin>>x>>n;
    int res = power(x,n);
    cout<<n<<" power of "<<x<<" is: "<<res<<endl;
   

}