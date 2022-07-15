#include <bits/stdc++.h>
#include<math.h>
using namespace std;


void printStrRec(string s,int n){
   if(n==s.size()){
      return;
   }
   cout<<s[n];
   printStrRec(s,n+1);
}

void printRevStrRec(string s,int n){
   if(n==s.size()){
      return;
   }
   
   printRevStrRec(s,n+1);
   cout<<s[n];
}




int main()
{  
   string s;
   cin>>s;

   printStrRec(s,0);
   cout<<endl;
   printRevStrRec(s,0);
  return 0;

}