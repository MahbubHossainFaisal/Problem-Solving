#include <bits/stdc++.h>
#include<math.h>
using namespace std;


int numberOfOccurrance(int arr[], int n,int ele,int cnt){
    //base case
    if(n==0) {
      return cnt;
    }

    if(arr[0] == ele) ++cnt;

  return  numberOfOccurrance(arr+1,n-1,ele,cnt);
    
   
    
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
   int cnt =0;
  int ans = numberOfOccurrance(arr,n,ele,cnt);
  cout<<ans<<endl;
  return 0;

}