#include <bits/stdc++.h>
#include<math.h>
using namespace std;


int lastIndex(int arr[], int n,int ele){
    //base case
    if(n==0) {
      if(arr[n] == ele) return n;
      else return -1;
    }

    if(arr[n] == ele) return n;

    return lastIndex(arr,n-1,ele);

    
}



int main()
{  int n;
   cin>>n;
   int * arr = new int[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   int ele ;
   cin>>ele; 
   int ans = lastIndex(arr,n,ele);
   cout<<ans<<endl;

}