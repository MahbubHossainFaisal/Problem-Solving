#include <bits/stdc++.h>
#include<math.h>
using namespace std;


void allIndex(int arr[], int n,int ele,int index){
    //base case
    if(n==0) {
      return;
    }

    if(arr[0] == ele) cout<<index<<endl;

    allIndex(arr+1,n-1,ele,index+1);
   
    
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
   allIndex(arr,n,ele,0);

}