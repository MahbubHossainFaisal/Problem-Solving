#include <bits/stdc++.h>
#include<math.h>
using namespace std;

bool checkSortedArray(int arr[],int n){
    if(n==0 or n==1){
        return true;
    }
    if(arr[0] > arr[1]) {
       // cout<<arr[n]<<endl;
        return false;
    }
    bool smallerInput = checkSortedArray(arr+1,n-1);
    
    return smallerInput;


}



int main()
{  int n;
   cin>>n;
   int * arr = new int[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   bool flag = false;
   bool ans = checkSortedArray(arr,n);

   cout<<ans<<endl;

}