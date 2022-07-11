#include <bits/stdc++.h>
#include<math.h>
using namespace std;


int arraySum(int arr[], int n){
    //base case
    if(n==0) return arr[0];

    //recusive call
    int smallerInput = arraySum(arr,n-1);

    //calculation
    return smallerInput + arr[n];
}



int main()
{  int n;
   cin>>n;
   int * arr = new int[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   } 
   int ans = arraySum(arr,n-1);
   cout<<ans<<endl;

}