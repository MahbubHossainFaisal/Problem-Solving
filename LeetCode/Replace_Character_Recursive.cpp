#include <bits/stdc++.h>
using namespace std;

void replaceCharacter(char *arr,char c,char r){
   
   if(arr[0] == '\0') return;

   if(arr[0] == c){
      arr[0] = r;
   }

   replaceCharacter(arr+1,c,r);
}

int main(){
  
   char *arr = new char[100];

   cin>>arr;
   char c,r ;
   cin>>c>>r;

   replaceCharacter(arr,c,r);
   cout<<arr<<endl;

   return 0;
}