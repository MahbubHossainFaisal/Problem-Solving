#include <bits/stdc++.h>
#include<math.h>
using namespace std;


double Gsum(int n){
    //base
    if(n==0) return 1;

    //recursive
    double smallerInput = Gsum(n-1);

    //Calculation
    return smallerInput+ 1.0/pow(2,n);
}

int main()
{
    int n;
    cin>>n;

   double res = Gsum(n);
   cout<<res;
    

}