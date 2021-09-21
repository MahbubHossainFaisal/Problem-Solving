#include <bits/stdc++.h>
using namespace std;


int main()
{
   int n;
   cin>>n;
   int p,q;
   cin>>p;
   int arr[210];
   for(int i=0; i<p; i++){
    cin>>arr[i];
   }
   cin>>q;
   for(int i=p; i<p+q; i++){
    cin>>arr[i];
   }
   sort(arr,arr+(p+q));
   int counter =0;
   for(int i=0; i<(p+q); i++){
    if(arr[i]!= arr[i+1]) counter++;
   }
  

   if(counter==n) cout<<"I become the guy.";
   else cout<<"Oh, my keyboard!";
    return 0;
}