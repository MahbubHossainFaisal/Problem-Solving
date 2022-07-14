#include <bits/stdc++.h>
#include<math.h>
using namespace std;


bool isPallindrome(string s, int n,int index){
    //base case
   if(n == index+1){
     if(s[n] == s[index]) return true;
     else return false;
   }

   if(s[index] != s[n]){
      return false;
   }

   return isPallindrome(s,n-1,index+1);
    
   
    
}



int main()
{  
   string s;
   cin>>s;

   bool ans = isPallindrome(s,s.size()-1,0);
  //cout<<ans<<endl;
  if(ans) cout<<"Pallindrome"<<endl;
  else cout<<"Not a Pallindrome"<<endl;
  return 0;

}