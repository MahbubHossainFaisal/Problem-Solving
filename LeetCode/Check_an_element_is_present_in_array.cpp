#include <bits/stdc++.h>
#include<math.h>
using namespace std;


bool checkElementPresent(int arr[], int n,int ele){
    //base case
    if(n==0){
        if(arr[0] != ele) return false;
        else return true;
    }
    if(arr[0] == ele) return true;

    return checkElementPresent(arr+1,n-1,ele);
}



int main()
{  int n;
   cin>>n;
   int * arr = new int[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   } 
   int ele;
   cin>>ele;

   bool ans = checkElementPresent(arr,n-1,ele);
   if(ans) cout<<"Element found";
   else cout<<"Element not found";

}