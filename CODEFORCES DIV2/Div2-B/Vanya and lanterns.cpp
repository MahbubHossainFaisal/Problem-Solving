#include <bits/stdc++.h>
using namespace std;

int main() {
 int n,d;
 cin>>n>>d;

 int *arr = new int[n];

 for(int i=0; i<n; i++){
   cin>>arr[i];
 }

 int distance = 0;
 sort(arr,arr+n);
 for(int i=0; i<n-1; i++){
   if(arr[i+1] - arr[i] > distance){
      distance = arr[i+1]- arr[i];
   }
 }

 double first = arr[0];
 double second = (double)distance/2;
 double res = max(first,second);
 double third = d-arr[n-1];
 res = max(third,res);

 cout<<fixed<<setprecision(10)<<res;
}

