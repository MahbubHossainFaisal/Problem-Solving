#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    //base case
    
    if(n==0) return 0;
    if(n==1) return 1;
    //assumption
    int smallerAns1 = fibonacci(n-1);
    int smallerAns2 = fibonacci(n-2);

    //calculation 
    int ans = smallerAns1+smallerAns2;
    return ans;
}

int main()
{

    int n;
    cin>>n;
   int ans = fibonacci(n);
   cout<<"fibonacci of "<<n<<" is: "<<ans<<endl;
   return 0;

}