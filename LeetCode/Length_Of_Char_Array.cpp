#include <bits/stdc++.h>
using namespace std;

int findLength(char *arr){
   if(arr[0] == '\0'){
      return 0;
   }

   return 1 + findLength(arr+1);

}

int main(){
  
   char *arr = new char[100];

   cin>>arr;
   int ans = findLength(arr);
   cout<<ans<<endl;

   return 0;
}